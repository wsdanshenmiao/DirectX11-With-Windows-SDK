#include "Basic.hlsli"

[maxvertexcount(5)]
void GS(line VertexPosColor input[2], inout LineStream<VertexPosColor> output)
{
    // 要求分形线段按顺时针排布
    // z分量必须相等，因为顶点没有提供法向量无法判断垂直上方向
    //                       v1
    //                       /\
    // ____________ =>  ____/  \____
    // i0         i1   i0  v0  v2  i1
    
    VertexPosColor v[3];
    for(int i=0;i<2;++i){
        v[i].posL = lerp(input[0].posL, input[1].posL, (1.0f + i) / 3.0f);
        v[i].color = lerp(input[0].color, input[1].color, (1.0f + i) / 3.0f);
    }

    // xy平面求出它的垂直单位向量
    //     
    //     |
    // ____|_____
    float2 upDir = normalize(input[1].posL - input[0].posL).yx;
    float len = length(input[1].posL.xy - input[0].posL.xy);
    upDir.x = upDir.x;

    v[2].posL = lerp(input[0].posL, input[1].posL, 0.5f);
    v[2].posL.xy += sqrt(3) / 6.0f * len * upDir;
    v[2].color = lerp(input[0].color, input[1].color, 0.5f);

    output.Append(input[0]);
    output.Append(v[0]);
    output.Append(v[2]);
    output.Append(v[1]);
    output.Append(input[1]);
}
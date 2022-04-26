#pragma once
#define Avc2CodeValid 1

#if Avc2CodeValid

#define FixStream 1
#define FixSEI 1
#define RecFrameOutput 1 
#define IBC 1

#else

#define FixStream 0
#define FixSEI 0
#define RecFrameOutput 0
#define PrintOneFrame 0

#endif

//#if Avc2CodeValid
//inline void print_one_frame(Macroblock* currMB) {
//    int cols, rows;
//    cols = currMB->p_Slice->dec_picture->size_x;
//    rows = currMB->p_Slice->dec_picture->size_y;
//    unsigned char* cache = calloc(cols * rows, 1);
//    if (cache == NULL) {
//        printf("calloc error");
//        return;
//    }
//    unsigned char* start = cache;
//    int row = 0;
//    while (row < rows)
//    {
//        for (int col = 0; col < cols; ++col) {
//            start[col] = currMB->p_Slice->dec_picture->imgY[row][col];
//        }
//        start += cols;
//        ++row;
//    }
//    FILE* write_file = fopen("dj_rec.yuv", "ab");
//    fwrite(cache, 1, cols * rows, write_file);
//    fclose(write_file);
//}
//#endif
/**
 * ,------. ,--.                        ,--.      ,------. ,--.
 * |  .--. '|  | ,--,--.,--,--, ,---. ,-'  '-.    |  .--. '|  | ,--,--.,--. ,--.,---. ,--.--.
 * |  '--' ||  |' ,-.  ||      \ .-. :'-.  .-'    |  '--' ||  |' ,-.  | \  '  /| .-. :|  .--'
 * |  | --' |  |\ '-'  ||  ||  \   --.  |  |      |  | --' |  |\ '-'  |  \   ' \   --.|  |
 * `--'     `--' `--`--'`--''--'`----'  `--'      `--'     `--' `--`--'.-'  /   `----'`--'
 *                                                                     `---'
 * Planet Player 播放器项目实践
 * 音视频开发进阶知识星球专栏文章
 *
 * 作者：星陨
 * 微信：ezglumes
 * 微信公众号：音视频开发进阶
 * 知识星球：音视频开发进阶
 * 博客网站：https://glumes.com
 *
 * 欢迎联系交流！！！
 */
#pragma once
#include "mp4/box/Box.h"
namespace planet {
#define AP4_IMPLEMENT_DYNAMIC_CAST_D(_class,_superclass)
    class FtypBox : public Box{
    public:
        static std::shared_ptr<FtypBox> Create(BOX_Size size,std::shared_ptr<ByteStreamReader> reader);
        FtypBox(BOX_Size size,std::shared_ptr<ByteStreamReader> reader);

    private:
        BOX_UI32 mMajorBrand;
        BOX_UI32 mMinorVersion;
        std::vector<BOX_UI32> mCompatibleBrands;
    };

}


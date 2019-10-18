//
// Created by 4dage on 2019/10/18.
//

#ifndef MY_SLAM_CONFIG_H
#define MY_SLAM_CONFIG_H

#include "myslam/common_include.h"

namespace myslam{
    class Config{
    private:
        static std::shared_ptr<Config> config_;
        cv::FileStorage file_;

        Config () {} // private constructor makes a singleton
    public:
        ~Config();  // close the file when deconstructing

        // set a new config file
        static void setParameterFile( const std::string& filename );

        // access the parameter values
        template< typename T >
        static T get( const std::string& key ){
            return T( Config::config_->file_[key] );
        }
    };
}

#endif //MY_SLAM_CONFIG_H

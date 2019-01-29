// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*! 
 * @file Transform.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _GEOMETRY_MSGS_TRANSFORM_HPP_
#define _GEOMETRY_MSGS_TRANSFORM_HPP_


#include "../topic.hpp"


#include "../geometry_msgs/Vector3.hpp"
#include "../geometry_msgs/Quaternion.hpp"

namespace geometry_msgs {

class Transform : public ros2::Topic<Transform>
{
public:
  geometry_msgs::Vector3 translation;
  geometry_msgs::Quaternion rotation;

  Transform():
    Topic("geometry_msgs::msg::dds_::Transform_", "Transform"),
    translation(),
    rotation()
  { 
  }


  bool serialize(void* msg_buf, const Transform* topic)
  {
    ucdrBuffer* writer = (ucdrBuffer*)msg_buf;
    (void) translation.serialize(writer, &topic->translation);
    (void) rotation.serialize(writer, &topic->rotation);

    return !writer->error;
  }

  bool deserialize(void* msg_buf, Transform* topic)
  {
    ucdrBuffer* reader = (ucdrBuffer*)msg_buf;
    (void) translation.deserialize(reader, &topic->translation);
    (void) rotation.deserialize(reader, &topic->rotation);

    return !reader->error;
  }

  uint32_t size_of_topic(const Transform* topic, uint32_t size)
  {
    uint32_t previousSize = size;
    size += translation.size_of_topic(&topic->translation, size);
    size += rotation.size_of_topic(&topic->rotation, size);
    
    return size - previousSize;
  }



};

} // namespace geometry_msgs


#endif // _GEOMETRY_MSGS_TRANSFORM_HPP_

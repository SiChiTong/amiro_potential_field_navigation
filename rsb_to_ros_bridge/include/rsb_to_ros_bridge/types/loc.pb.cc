// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: loc.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "loc.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace twbTracking {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* ObjectList_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ObjectList_reflection_ = NULL;
const ::google::protobuf::Descriptor* Object_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Object_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_loc_2eproto() {
  protobuf_AddDesc_loc_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "loc.proto");
  GOOGLE_CHECK(file != NULL);
  ObjectList_descriptor_ = file->message_type(0);
  static const int ObjectList_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ObjectList, object_),
  };
  ObjectList_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ObjectList_descriptor_,
      ObjectList::default_instance_,
      ObjectList_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ObjectList, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ObjectList, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ObjectList));
  Object_descriptor_ = file->message_type(1);
  static const int Object_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Object, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Object, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Object, confidence_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Object, unit_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Object, position_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Object, polygon_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Object, ellipse_),
  };
  Object_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Object_descriptor_,
      Object::default_instance_,
      Object_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Object, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Object, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Object));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_loc_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ObjectList_descriptor_, &ObjectList::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Object_descriptor_, &Object::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_loc_2eproto() {
  delete ObjectList::default_instance_;
  delete ObjectList_reflection_;
  delete Object::default_instance_;
  delete Object_reflection_;
}

void protobuf_AddDesc_loc_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::twbTracking::proto::protobuf_AddDesc_shapes_2eproto();
  ::twbTracking::proto::protobuf_AddDesc_enum_2eproto();
  ::twbTracking::proto::protobuf_AddDesc_pose_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\tloc.proto\022\021twbTracking.proto\032\014shapes.p"
    "roto\032\nenum.proto\032\npose.proto\"7\n\nObjectLi"
    "st\022)\n\006object\030\001 \003(\0132\031.twbTracking.proto.O"
    "bject\"\373\001\n\006Object\022\n\n\002id\030\001 \002(\r\022%\n\004type\030\002 \002"
    "(\0162\027.twbTracking.proto.Type\022\022\n\nconfidenc"
    "e\030\003 \001(\002\022%\n\004unit\030\004 \002(\0162\027.twbTracking.prot"
    "o.Unit\022)\n\010position\030\005 \002(\0132\027.twbTracking.p"
    "roto.Pose\022+\n\007polygon\030\006 \001(\0132\032.twbTracking"
    ".proto.Polygon\022+\n\007ellipse\030\007 \001(\0132\032.twbTra"
    "cking.proto.Ellipse", 379);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "loc.proto", &protobuf_RegisterTypes);
  ObjectList::default_instance_ = new ObjectList();
  Object::default_instance_ = new Object();
  ObjectList::default_instance_->InitAsDefaultInstance();
  Object::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_loc_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_loc_2eproto {
  StaticDescriptorInitializer_loc_2eproto() {
    protobuf_AddDesc_loc_2eproto();
  }
} static_descriptor_initializer_loc_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ObjectList::kObjectFieldNumber;
#endif  // !_MSC_VER

ObjectList::ObjectList()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:twbTracking.proto.ObjectList)
}

void ObjectList::InitAsDefaultInstance() {
}

ObjectList::ObjectList(const ObjectList& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:twbTracking.proto.ObjectList)
}

void ObjectList::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ObjectList::~ObjectList() {
  // @@protoc_insertion_point(destructor:twbTracking.proto.ObjectList)
  SharedDtor();
}

void ObjectList::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ObjectList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ObjectList::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ObjectList_descriptor_;
}

const ObjectList& ObjectList::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_loc_2eproto();
  return *default_instance_;
}

ObjectList* ObjectList::default_instance_ = NULL;

ObjectList* ObjectList::New() const {
  return new ObjectList;
}

void ObjectList::Clear() {
  object_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ObjectList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:twbTracking.proto.ObjectList)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .twbTracking.proto.Object object = 1;
      case 1: {
        if (tag == 10) {
         parse_object:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_object()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_object;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:twbTracking.proto.ObjectList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:twbTracking.proto.ObjectList)
  return false;
#undef DO_
}

void ObjectList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:twbTracking.proto.ObjectList)
  // repeated .twbTracking.proto.Object object = 1;
  for (int i = 0; i < this->object_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->object(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:twbTracking.proto.ObjectList)
}

::google::protobuf::uint8* ObjectList::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:twbTracking.proto.ObjectList)
  // repeated .twbTracking.proto.Object object = 1;
  for (int i = 0; i < this->object_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->object(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:twbTracking.proto.ObjectList)
  return target;
}

int ObjectList::ByteSize() const {
  int total_size = 0;

  // repeated .twbTracking.proto.Object object = 1;
  total_size += 1 * this->object_size();
  for (int i = 0; i < this->object_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->object(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ObjectList::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ObjectList* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ObjectList*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ObjectList::MergeFrom(const ObjectList& from) {
  GOOGLE_CHECK_NE(&from, this);
  object_.MergeFrom(from.object_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ObjectList::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ObjectList::CopyFrom(const ObjectList& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ObjectList::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->object())) return false;
  return true;
}

void ObjectList::Swap(ObjectList* other) {
  if (other != this) {
    object_.Swap(&other->object_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ObjectList::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ObjectList_descriptor_;
  metadata.reflection = ObjectList_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Object::kIdFieldNumber;
const int Object::kTypeFieldNumber;
const int Object::kConfidenceFieldNumber;
const int Object::kUnitFieldNumber;
const int Object::kPositionFieldNumber;
const int Object::kPolygonFieldNumber;
const int Object::kEllipseFieldNumber;
#endif  // !_MSC_VER

Object::Object()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:twbTracking.proto.Object)
}

void Object::InitAsDefaultInstance() {
  position_ = const_cast< ::twbTracking::proto::Pose*>(&::twbTracking::proto::Pose::default_instance());
  polygon_ = const_cast< ::twbTracking::proto::Polygon*>(&::twbTracking::proto::Polygon::default_instance());
  ellipse_ = const_cast< ::twbTracking::proto::Ellipse*>(&::twbTracking::proto::Ellipse::default_instance());
}

Object::Object(const Object& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:twbTracking.proto.Object)
}

void Object::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0u;
  type_ = 0;
  confidence_ = 0;
  unit_ = 0;
  position_ = NULL;
  polygon_ = NULL;
  ellipse_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Object::~Object() {
  // @@protoc_insertion_point(destructor:twbTracking.proto.Object)
  SharedDtor();
}

void Object::SharedDtor() {
  if (this != default_instance_) {
    delete position_;
    delete polygon_;
    delete ellipse_;
  }
}

void Object::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Object::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Object_descriptor_;
}

const Object& Object::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_loc_2eproto();
  return *default_instance_;
}

Object* Object::default_instance_ = NULL;

Object* Object::New() const {
  return new Object;
}

void Object::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<Object*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 127) {
    ZR_(id_, unit_);
    if (has_position()) {
      if (position_ != NULL) position_->::twbTracking::proto::Pose::Clear();
    }
    if (has_polygon()) {
      if (polygon_ != NULL) polygon_->::twbTracking::proto::Polygon::Clear();
    }
    if (has_ellipse()) {
      if (ellipse_ != NULL) ellipse_->::twbTracking::proto::Ellipse::Clear();
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Object::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:twbTracking.proto.Object)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_type;
        break;
      }

      // required .twbTracking.proto.Type type = 2;
      case 2: {
        if (tag == 16) {
         parse_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::twbTracking::proto::Type_IsValid(value)) {
            set_type(static_cast< ::twbTracking::proto::Type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(29)) goto parse_confidence;
        break;
      }

      // optional float confidence = 3;
      case 3: {
        if (tag == 29) {
         parse_confidence:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &confidence_)));
          set_has_confidence();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_unit;
        break;
      }

      // required .twbTracking.proto.Unit unit = 4;
      case 4: {
        if (tag == 32) {
         parse_unit:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::twbTracking::proto::Unit_IsValid(value)) {
            set_unit(static_cast< ::twbTracking::proto::Unit >(value));
          } else {
            mutable_unknown_fields()->AddVarint(4, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_position;
        break;
      }

      // required .twbTracking.proto.Pose position = 5;
      case 5: {
        if (tag == 42) {
         parse_position:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_position()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_polygon;
        break;
      }

      // optional .twbTracking.proto.Polygon polygon = 6;
      case 6: {
        if (tag == 50) {
         parse_polygon:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_polygon()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_ellipse;
        break;
      }

      // optional .twbTracking.proto.Ellipse ellipse = 7;
      case 7: {
        if (tag == 58) {
         parse_ellipse:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ellipse()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:twbTracking.proto.Object)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:twbTracking.proto.Object)
  return false;
#undef DO_
}

void Object::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:twbTracking.proto.Object)
  // required uint32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // required .twbTracking.proto.Type type = 2;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }

  // optional float confidence = 3;
  if (has_confidence()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->confidence(), output);
  }

  // required .twbTracking.proto.Unit unit = 4;
  if (has_unit()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->unit(), output);
  }

  // required .twbTracking.proto.Pose position = 5;
  if (has_position()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->position(), output);
  }

  // optional .twbTracking.proto.Polygon polygon = 6;
  if (has_polygon()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->polygon(), output);
  }

  // optional .twbTracking.proto.Ellipse ellipse = 7;
  if (has_ellipse()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->ellipse(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:twbTracking.proto.Object)
}

::google::protobuf::uint8* Object::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:twbTracking.proto.Object)
  // required uint32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->id(), target);
  }

  // required .twbTracking.proto.Type type = 2;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->type(), target);
  }

  // optional float confidence = 3;
  if (has_confidence()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->confidence(), target);
  }

  // required .twbTracking.proto.Unit unit = 4;
  if (has_unit()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->unit(), target);
  }

  // required .twbTracking.proto.Pose position = 5;
  if (has_position()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        5, this->position(), target);
  }

  // optional .twbTracking.proto.Polygon polygon = 6;
  if (has_polygon()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        6, this->polygon(), target);
  }

  // optional .twbTracking.proto.Ellipse ellipse = 7;
  if (has_ellipse()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        7, this->ellipse(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:twbTracking.proto.Object)
  return target;
}

int Object::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

    // required .twbTracking.proto.Type type = 2;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional float confidence = 3;
    if (has_confidence()) {
      total_size += 1 + 4;
    }

    // required .twbTracking.proto.Unit unit = 4;
    if (has_unit()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->unit());
    }

    // required .twbTracking.proto.Pose position = 5;
    if (has_position()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->position());
    }

    // optional .twbTracking.proto.Polygon polygon = 6;
    if (has_polygon()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->polygon());
    }

    // optional .twbTracking.proto.Ellipse ellipse = 7;
    if (has_ellipse()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->ellipse());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Object::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Object* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Object*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Object::MergeFrom(const Object& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_confidence()) {
      set_confidence(from.confidence());
    }
    if (from.has_unit()) {
      set_unit(from.unit());
    }
    if (from.has_position()) {
      mutable_position()->::twbTracking::proto::Pose::MergeFrom(from.position());
    }
    if (from.has_polygon()) {
      mutable_polygon()->::twbTracking::proto::Polygon::MergeFrom(from.polygon());
    }
    if (from.has_ellipse()) {
      mutable_ellipse()->::twbTracking::proto::Ellipse::MergeFrom(from.ellipse());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Object::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Object::CopyFrom(const Object& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Object::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000001b) != 0x0000001b) return false;

  if (has_position()) {
    if (!this->position().IsInitialized()) return false;
  }
  if (has_polygon()) {
    if (!this->polygon().IsInitialized()) return false;
  }
  if (has_ellipse()) {
    if (!this->ellipse().IsInitialized()) return false;
  }
  return true;
}

void Object::Swap(Object* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(type_, other->type_);
    std::swap(confidence_, other->confidence_);
    std::swap(unit_, other->unit_);
    std::swap(position_, other->position_);
    std::swap(polygon_, other->polygon_);
    std::swap(ellipse_, other->ellipse_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Object::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Object_descriptor_;
  metadata.reflection = Object_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace twbTracking

// @@protoc_insertion_point(global_scope)
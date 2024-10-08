// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model_config.proto

#ifndef PROTOBUF_INCLUDED_model_5fconfig_2eproto
#define PROTOBUF_INCLUDED_model_5fconfig_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_model_5fconfig_2eproto 

namespace protobuf_model_5fconfig_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_model_5fconfig_2eproto
class ModelBlockProfile;
class ModelBlockProfileDefaultTypeInternal;
extern ModelBlockProfileDefaultTypeInternal _ModelBlockProfile_default_instance_;
class ModelConfig;
class ModelConfigDefaultTypeInternal;
extern ModelConfigDefaultTypeInternal _ModelConfig_default_instance_;
namespace google {
namespace protobuf {
template<> ::ModelBlockProfile* Arena::CreateMaybeMessage<::ModelBlockProfile>(Arena*);
template<> ::ModelConfig* Arena::CreateMaybeMessage<::ModelConfig>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class ModelBlockProfile : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ModelBlockProfile) */ {
 public:
  ModelBlockProfile();
  virtual ~ModelBlockProfile();

  ModelBlockProfile(const ModelBlockProfile& from);

  inline ModelBlockProfile& operator=(const ModelBlockProfile& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ModelBlockProfile(ModelBlockProfile&& from) noexcept
    : ModelBlockProfile() {
    *this = ::std::move(from);
  }

  inline ModelBlockProfile& operator=(ModelBlockProfile&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ModelBlockProfile& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ModelBlockProfile* internal_default_instance() {
    return reinterpret_cast<const ModelBlockProfile*>(
               &_ModelBlockProfile_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ModelBlockProfile* other);
  friend void swap(ModelBlockProfile& a, ModelBlockProfile& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ModelBlockProfile* New() const final {
    return CreateMaybeMessage<ModelBlockProfile>(NULL);
  }

  ModelBlockProfile* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ModelBlockProfile>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ModelBlockProfile& from);
  void MergeFrom(const ModelBlockProfile& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ModelBlockProfile* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int64 latency = 2;
  void clear_latency();
  static const int kLatencyFieldNumber = 2;
  ::google::protobuf::int64 latency() const;
  void set_latency(::google::protobuf::int64 value);

  // int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // float accuracy = 3;
  void clear_accuracy();
  static const int kAccuracyFieldNumber = 3;
  float accuracy() const;
  void set_accuracy(float value);

  // @@protoc_insertion_point(class_scope:ModelBlockProfile)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int64 latency_;
  ::google::protobuf::int32 id_;
  float accuracy_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_model_5fconfig_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ModelConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ModelConfig) */ {
 public:
  ModelConfig();
  virtual ~ModelConfig();

  ModelConfig(const ModelConfig& from);

  inline ModelConfig& operator=(const ModelConfig& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ModelConfig(ModelConfig&& from) noexcept
    : ModelConfig() {
    *this = ::std::move(from);
  }

  inline ModelConfig& operator=(ModelConfig&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ModelConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ModelConfig* internal_default_instance() {
    return reinterpret_cast<const ModelConfig*>(
               &_ModelConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(ModelConfig* other);
  friend void swap(ModelConfig& a, ModelConfig& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ModelConfig* New() const final {
    return CreateMaybeMessage<ModelConfig>(NULL);
  }

  ModelConfig* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ModelConfig>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ModelConfig& from);
  void MergeFrom(const ModelConfig& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ModelConfig* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated int64 dims = 2;
  int dims_size() const;
  void clear_dims();
  static const int kDimsFieldNumber = 2;
  ::google::protobuf::int64 dims(int index) const;
  void set_dims(int index, ::google::protobuf::int64 value);
  void add_dims(::google::protobuf::int64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
      dims() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
      mutable_dims();

  // repeated .ModelBlockProfile block_profile = 3;
  int block_profile_size() const;
  void clear_block_profile();
  static const int kBlockProfileFieldNumber = 3;
  ::ModelBlockProfile* mutable_block_profile(int index);
  ::google::protobuf::RepeatedPtrField< ::ModelBlockProfile >*
      mutable_block_profile();
  const ::ModelBlockProfile& block_profile(int index) const;
  ::ModelBlockProfile* add_block_profile();
  const ::google::protobuf::RepeatedPtrField< ::ModelBlockProfile >&
      block_profile() const;

  // repeated .ModelBlockProfile exit_profile = 4;
  int exit_profile_size() const;
  void clear_exit_profile();
  static const int kExitProfileFieldNumber = 4;
  ::ModelBlockProfile* mutable_exit_profile(int index);
  ::google::protobuf::RepeatedPtrField< ::ModelBlockProfile >*
      mutable_exit_profile();
  const ::ModelBlockProfile& exit_profile(int index) const;
  ::ModelBlockProfile* add_exit_profile();
  const ::google::protobuf::RepeatedPtrField< ::ModelBlockProfile >&
      exit_profile() const;

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:ModelConfig)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > dims_;
  mutable int _dims_cached_byte_size_;
  ::google::protobuf::RepeatedPtrField< ::ModelBlockProfile > block_profile_;
  ::google::protobuf::RepeatedPtrField< ::ModelBlockProfile > exit_profile_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_model_5fconfig_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ModelBlockProfile

// int32 id = 1;
inline void ModelBlockProfile::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 ModelBlockProfile::id() const {
  // @@protoc_insertion_point(field_get:ModelBlockProfile.id)
  return id_;
}
inline void ModelBlockProfile::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:ModelBlockProfile.id)
}

// int64 latency = 2;
inline void ModelBlockProfile::clear_latency() {
  latency_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ModelBlockProfile::latency() const {
  // @@protoc_insertion_point(field_get:ModelBlockProfile.latency)
  return latency_;
}
inline void ModelBlockProfile::set_latency(::google::protobuf::int64 value) {
  
  latency_ = value;
  // @@protoc_insertion_point(field_set:ModelBlockProfile.latency)
}

// float accuracy = 3;
inline void ModelBlockProfile::clear_accuracy() {
  accuracy_ = 0;
}
inline float ModelBlockProfile::accuracy() const {
  // @@protoc_insertion_point(field_get:ModelBlockProfile.accuracy)
  return accuracy_;
}
inline void ModelBlockProfile::set_accuracy(float value) {
  
  accuracy_ = value;
  // @@protoc_insertion_point(field_set:ModelBlockProfile.accuracy)
}

// -------------------------------------------------------------------

// ModelConfig

// string name = 1;
inline void ModelConfig::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ModelConfig::name() const {
  // @@protoc_insertion_point(field_get:ModelConfig.name)
  return name_.GetNoArena();
}
inline void ModelConfig::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ModelConfig.name)
}
#if LANG_CXX11
inline void ModelConfig::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ModelConfig.name)
}
#endif
inline void ModelConfig::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ModelConfig.name)
}
inline void ModelConfig::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ModelConfig.name)
}
inline ::std::string* ModelConfig::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:ModelConfig.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ModelConfig::release_name() {
  // @@protoc_insertion_point(field_release:ModelConfig.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ModelConfig::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ModelConfig.name)
}

// repeated int64 dims = 2;
inline int ModelConfig::dims_size() const {
  return dims_.size();
}
inline void ModelConfig::clear_dims() {
  dims_.Clear();
}
inline ::google::protobuf::int64 ModelConfig::dims(int index) const {
  // @@protoc_insertion_point(field_get:ModelConfig.dims)
  return dims_.Get(index);
}
inline void ModelConfig::set_dims(int index, ::google::protobuf::int64 value) {
  dims_.Set(index, value);
  // @@protoc_insertion_point(field_set:ModelConfig.dims)
}
inline void ModelConfig::add_dims(::google::protobuf::int64 value) {
  dims_.Add(value);
  // @@protoc_insertion_point(field_add:ModelConfig.dims)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
ModelConfig::dims() const {
  // @@protoc_insertion_point(field_list:ModelConfig.dims)
  return dims_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
ModelConfig::mutable_dims() {
  // @@protoc_insertion_point(field_mutable_list:ModelConfig.dims)
  return &dims_;
}

// repeated .ModelBlockProfile block_profile = 3;
inline int ModelConfig::block_profile_size() const {
  return block_profile_.size();
}
inline void ModelConfig::clear_block_profile() {
  block_profile_.Clear();
}
inline ::ModelBlockProfile* ModelConfig::mutable_block_profile(int index) {
  // @@protoc_insertion_point(field_mutable:ModelConfig.block_profile)
  return block_profile_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ModelBlockProfile >*
ModelConfig::mutable_block_profile() {
  // @@protoc_insertion_point(field_mutable_list:ModelConfig.block_profile)
  return &block_profile_;
}
inline const ::ModelBlockProfile& ModelConfig::block_profile(int index) const {
  // @@protoc_insertion_point(field_get:ModelConfig.block_profile)
  return block_profile_.Get(index);
}
inline ::ModelBlockProfile* ModelConfig::add_block_profile() {
  // @@protoc_insertion_point(field_add:ModelConfig.block_profile)
  return block_profile_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ModelBlockProfile >&
ModelConfig::block_profile() const {
  // @@protoc_insertion_point(field_list:ModelConfig.block_profile)
  return block_profile_;
}

// repeated .ModelBlockProfile exit_profile = 4;
inline int ModelConfig::exit_profile_size() const {
  return exit_profile_.size();
}
inline void ModelConfig::clear_exit_profile() {
  exit_profile_.Clear();
}
inline ::ModelBlockProfile* ModelConfig::mutable_exit_profile(int index) {
  // @@protoc_insertion_point(field_mutable:ModelConfig.exit_profile)
  return exit_profile_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ModelBlockProfile >*
ModelConfig::mutable_exit_profile() {
  // @@protoc_insertion_point(field_mutable_list:ModelConfig.exit_profile)
  return &exit_profile_;
}
inline const ::ModelBlockProfile& ModelConfig::exit_profile(int index) const {
  // @@protoc_insertion_point(field_get:ModelConfig.exit_profile)
  return exit_profile_.Get(index);
}
inline ::ModelBlockProfile* ModelConfig::add_exit_profile() {
  // @@protoc_insertion_point(field_add:ModelConfig.exit_profile)
  return exit_profile_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ModelBlockProfile >&
ModelConfig::exit_profile() const {
  // @@protoc_insertion_point(field_list:ModelConfig.exit_profile)
  return exit_profile_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_model_5fconfig_2eproto

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: fibonacci.calculator.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_fibonacci_2ecalculator_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_fibonacci_2ecalculator_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021006 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_fibonacci_2ecalculator_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_fibonacci_2ecalculator_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_fibonacci_2ecalculator_2eproto;
class JsonFibonacciReply;
struct JsonFibonacciReplyDefaultTypeInternal;
extern JsonFibonacciReplyDefaultTypeInternal _JsonFibonacciReply_default_instance_;
class SimpleFibonacciQuery;
struct SimpleFibonacciQueryDefaultTypeInternal;
extern SimpleFibonacciQueryDefaultTypeInternal _SimpleFibonacciQuery_default_instance_;
class SimpleFibonacciReply;
struct SimpleFibonacciReplyDefaultTypeInternal;
extern SimpleFibonacciReplyDefaultTypeInternal _SimpleFibonacciReply_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::JsonFibonacciReply* Arena::CreateMaybeMessage<::JsonFibonacciReply>(Arena*);
template<> ::SimpleFibonacciQuery* Arena::CreateMaybeMessage<::SimpleFibonacciQuery>(Arena*);
template<> ::SimpleFibonacciReply* Arena::CreateMaybeMessage<::SimpleFibonacciReply>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class SimpleFibonacciQuery final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:SimpleFibonacciQuery) */ {
 public:
  inline SimpleFibonacciQuery() : SimpleFibonacciQuery(nullptr) {}
  ~SimpleFibonacciQuery() override;
  explicit PROTOBUF_CONSTEXPR SimpleFibonacciQuery(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SimpleFibonacciQuery(const SimpleFibonacciQuery& from);
  SimpleFibonacciQuery(SimpleFibonacciQuery&& from) noexcept
    : SimpleFibonacciQuery() {
    *this = ::std::move(from);
  }

  inline SimpleFibonacciQuery& operator=(const SimpleFibonacciQuery& from) {
    CopyFrom(from);
    return *this;
  }
  inline SimpleFibonacciQuery& operator=(SimpleFibonacciQuery&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SimpleFibonacciQuery& default_instance() {
    return *internal_default_instance();
  }
  static inline const SimpleFibonacciQuery* internal_default_instance() {
    return reinterpret_cast<const SimpleFibonacciQuery*>(
               &_SimpleFibonacciQuery_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SimpleFibonacciQuery& a, SimpleFibonacciQuery& b) {
    a.Swap(&b);
  }
  inline void Swap(SimpleFibonacciQuery* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SimpleFibonacciQuery* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SimpleFibonacciQuery* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SimpleFibonacciQuery>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SimpleFibonacciQuery& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SimpleFibonacciQuery& from) {
    SimpleFibonacciQuery::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SimpleFibonacciQuery* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "SimpleFibonacciQuery";
  }
  protected:
  explicit SimpleFibonacciQuery(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFibonacciQueryFieldNumber = 1,
  };
  // int32 fibonacciQuery = 1;
  void clear_fibonacciquery();
  int32_t fibonacciquery() const;
  void set_fibonacciquery(int32_t value);
  private:
  int32_t _internal_fibonacciquery() const;
  void _internal_set_fibonacciquery(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:SimpleFibonacciQuery)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int32_t fibonacciquery_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_fibonacci_2ecalculator_2eproto;
};
// -------------------------------------------------------------------

class SimpleFibonacciReply final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:SimpleFibonacciReply) */ {
 public:
  inline SimpleFibonacciReply() : SimpleFibonacciReply(nullptr) {}
  ~SimpleFibonacciReply() override;
  explicit PROTOBUF_CONSTEXPR SimpleFibonacciReply(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SimpleFibonacciReply(const SimpleFibonacciReply& from);
  SimpleFibonacciReply(SimpleFibonacciReply&& from) noexcept
    : SimpleFibonacciReply() {
    *this = ::std::move(from);
  }

  inline SimpleFibonacciReply& operator=(const SimpleFibonacciReply& from) {
    CopyFrom(from);
    return *this;
  }
  inline SimpleFibonacciReply& operator=(SimpleFibonacciReply&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SimpleFibonacciReply& default_instance() {
    return *internal_default_instance();
  }
  static inline const SimpleFibonacciReply* internal_default_instance() {
    return reinterpret_cast<const SimpleFibonacciReply*>(
               &_SimpleFibonacciReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SimpleFibonacciReply& a, SimpleFibonacciReply& b) {
    a.Swap(&b);
  }
  inline void Swap(SimpleFibonacciReply* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SimpleFibonacciReply* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SimpleFibonacciReply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SimpleFibonacciReply>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SimpleFibonacciReply& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SimpleFibonacciReply& from) {
    SimpleFibonacciReply::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SimpleFibonacciReply* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "SimpleFibonacciReply";
  }
  protected:
  explicit SimpleFibonacciReply(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFibonacciResultFieldNumber = 1,
  };
  // string fibonacciResult = 1;
  void clear_fibonacciresult();
  const std::string& fibonacciresult() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_fibonacciresult(ArgT0&& arg0, ArgT... args);
  std::string* mutable_fibonacciresult();
  PROTOBUF_NODISCARD std::string* release_fibonacciresult();
  void set_allocated_fibonacciresult(std::string* fibonacciresult);
  private:
  const std::string& _internal_fibonacciresult() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_fibonacciresult(const std::string& value);
  std::string* _internal_mutable_fibonacciresult();
  public:

  // @@protoc_insertion_point(class_scope:SimpleFibonacciReply)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr fibonacciresult_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_fibonacci_2ecalculator_2eproto;
};
// -------------------------------------------------------------------

class JsonFibonacciReply final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:JsonFibonacciReply) */ {
 public:
  inline JsonFibonacciReply() : JsonFibonacciReply(nullptr) {}
  ~JsonFibonacciReply() override;
  explicit PROTOBUF_CONSTEXPR JsonFibonacciReply(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  JsonFibonacciReply(const JsonFibonacciReply& from);
  JsonFibonacciReply(JsonFibonacciReply&& from) noexcept
    : JsonFibonacciReply() {
    *this = ::std::move(from);
  }

  inline JsonFibonacciReply& operator=(const JsonFibonacciReply& from) {
    CopyFrom(from);
    return *this;
  }
  inline JsonFibonacciReply& operator=(JsonFibonacciReply&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const JsonFibonacciReply& default_instance() {
    return *internal_default_instance();
  }
  static inline const JsonFibonacciReply* internal_default_instance() {
    return reinterpret_cast<const JsonFibonacciReply*>(
               &_JsonFibonacciReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(JsonFibonacciReply& a, JsonFibonacciReply& b) {
    a.Swap(&b);
  }
  inline void Swap(JsonFibonacciReply* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(JsonFibonacciReply* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  JsonFibonacciReply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<JsonFibonacciReply>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const JsonFibonacciReply& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const JsonFibonacciReply& from) {
    JsonFibonacciReply::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(JsonFibonacciReply* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "JsonFibonacciReply";
  }
  protected:
  explicit JsonFibonacciReply(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFibonacciJsonResultFieldNumber = 1,
  };
  // string fibonacciJsonResult = 1;
  void clear_fibonaccijsonresult();
  const std::string& fibonaccijsonresult() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_fibonaccijsonresult(ArgT0&& arg0, ArgT... args);
  std::string* mutable_fibonaccijsonresult();
  PROTOBUF_NODISCARD std::string* release_fibonaccijsonresult();
  void set_allocated_fibonaccijsonresult(std::string* fibonaccijsonresult);
  private:
  const std::string& _internal_fibonaccijsonresult() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_fibonaccijsonresult(const std::string& value);
  std::string* _internal_mutable_fibonaccijsonresult();
  public:

  // @@protoc_insertion_point(class_scope:JsonFibonacciReply)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr fibonaccijsonresult_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_fibonacci_2ecalculator_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SimpleFibonacciQuery

// int32 fibonacciQuery = 1;
inline void SimpleFibonacciQuery::clear_fibonacciquery() {
  _impl_.fibonacciquery_ = 0;
}
inline int32_t SimpleFibonacciQuery::_internal_fibonacciquery() const {
  return _impl_.fibonacciquery_;
}
inline int32_t SimpleFibonacciQuery::fibonacciquery() const {
  // @@protoc_insertion_point(field_get:SimpleFibonacciQuery.fibonacciQuery)
  return _internal_fibonacciquery();
}
inline void SimpleFibonacciQuery::_internal_set_fibonacciquery(int32_t value) {
  
  _impl_.fibonacciquery_ = value;
}
inline void SimpleFibonacciQuery::set_fibonacciquery(int32_t value) {
  _internal_set_fibonacciquery(value);
  // @@protoc_insertion_point(field_set:SimpleFibonacciQuery.fibonacciQuery)
}

// -------------------------------------------------------------------

// SimpleFibonacciReply

// string fibonacciResult = 1;
inline void SimpleFibonacciReply::clear_fibonacciresult() {
  _impl_.fibonacciresult_.ClearToEmpty();
}
inline const std::string& SimpleFibonacciReply::fibonacciresult() const {
  // @@protoc_insertion_point(field_get:SimpleFibonacciReply.fibonacciResult)
  return _internal_fibonacciresult();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SimpleFibonacciReply::set_fibonacciresult(ArgT0&& arg0, ArgT... args) {
 
 _impl_.fibonacciresult_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:SimpleFibonacciReply.fibonacciResult)
}
inline std::string* SimpleFibonacciReply::mutable_fibonacciresult() {
  std::string* _s = _internal_mutable_fibonacciresult();
  // @@protoc_insertion_point(field_mutable:SimpleFibonacciReply.fibonacciResult)
  return _s;
}
inline const std::string& SimpleFibonacciReply::_internal_fibonacciresult() const {
  return _impl_.fibonacciresult_.Get();
}
inline void SimpleFibonacciReply::_internal_set_fibonacciresult(const std::string& value) {
  
  _impl_.fibonacciresult_.Set(value, GetArenaForAllocation());
}
inline std::string* SimpleFibonacciReply::_internal_mutable_fibonacciresult() {
  
  return _impl_.fibonacciresult_.Mutable(GetArenaForAllocation());
}
inline std::string* SimpleFibonacciReply::release_fibonacciresult() {
  // @@protoc_insertion_point(field_release:SimpleFibonacciReply.fibonacciResult)
  return _impl_.fibonacciresult_.Release();
}
inline void SimpleFibonacciReply::set_allocated_fibonacciresult(std::string* fibonacciresult) {
  if (fibonacciresult != nullptr) {
    
  } else {
    
  }
  _impl_.fibonacciresult_.SetAllocated(fibonacciresult, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.fibonacciresult_.IsDefault()) {
    _impl_.fibonacciresult_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:SimpleFibonacciReply.fibonacciResult)
}

// -------------------------------------------------------------------

// JsonFibonacciReply

// string fibonacciJsonResult = 1;
inline void JsonFibonacciReply::clear_fibonaccijsonresult() {
  _impl_.fibonaccijsonresult_.ClearToEmpty();
}
inline const std::string& JsonFibonacciReply::fibonaccijsonresult() const {
  // @@protoc_insertion_point(field_get:JsonFibonacciReply.fibonacciJsonResult)
  return _internal_fibonaccijsonresult();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void JsonFibonacciReply::set_fibonaccijsonresult(ArgT0&& arg0, ArgT... args) {
 
 _impl_.fibonaccijsonresult_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:JsonFibonacciReply.fibonacciJsonResult)
}
inline std::string* JsonFibonacciReply::mutable_fibonaccijsonresult() {
  std::string* _s = _internal_mutable_fibonaccijsonresult();
  // @@protoc_insertion_point(field_mutable:JsonFibonacciReply.fibonacciJsonResult)
  return _s;
}
inline const std::string& JsonFibonacciReply::_internal_fibonaccijsonresult() const {
  return _impl_.fibonaccijsonresult_.Get();
}
inline void JsonFibonacciReply::_internal_set_fibonaccijsonresult(const std::string& value) {
  
  _impl_.fibonaccijsonresult_.Set(value, GetArenaForAllocation());
}
inline std::string* JsonFibonacciReply::_internal_mutable_fibonaccijsonresult() {
  
  return _impl_.fibonaccijsonresult_.Mutable(GetArenaForAllocation());
}
inline std::string* JsonFibonacciReply::release_fibonaccijsonresult() {
  // @@protoc_insertion_point(field_release:JsonFibonacciReply.fibonacciJsonResult)
  return _impl_.fibonaccijsonresult_.Release();
}
inline void JsonFibonacciReply::set_allocated_fibonaccijsonresult(std::string* fibonaccijsonresult) {
  if (fibonaccijsonresult != nullptr) {
    
  } else {
    
  }
  _impl_.fibonaccijsonresult_.SetAllocated(fibonaccijsonresult, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.fibonaccijsonresult_.IsDefault()) {
    _impl_.fibonaccijsonresult_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:JsonFibonacciReply.fibonacciJsonResult)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_fibonacci_2ecalculator_2eproto

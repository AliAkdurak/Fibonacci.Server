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
class SimpleFibonacciQuery;
struct SimpleFibonacciQueryDefaultTypeInternal;
extern SimpleFibonacciQueryDefaultTypeInternal _SimpleFibonacciQuery_default_instance_;
class SimpleFibonacciReply;
struct SimpleFibonacciReplyDefaultTypeInternal;
extern SimpleFibonacciReplyDefaultTypeInternal _SimpleFibonacciReply_default_instance_;
PROTOBUF_NAMESPACE_OPEN
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
  // int64 fibonacciResult = 1;
  void clear_fibonacciresult();
  int64_t fibonacciresult() const;
  void set_fibonacciresult(int64_t value);
  private:
  int64_t _internal_fibonacciresult() const;
  void _internal_set_fibonacciresult(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:SimpleFibonacciReply)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int64_t fibonacciresult_;
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

// int64 fibonacciResult = 1;
inline void SimpleFibonacciReply::clear_fibonacciresult() {
  _impl_.fibonacciresult_ = int64_t{0};
}
inline int64_t SimpleFibonacciReply::_internal_fibonacciresult() const {
  return _impl_.fibonacciresult_;
}
inline int64_t SimpleFibonacciReply::fibonacciresult() const {
  // @@protoc_insertion_point(field_get:SimpleFibonacciReply.fibonacciResult)
  return _internal_fibonacciresult();
}
inline void SimpleFibonacciReply::_internal_set_fibonacciresult(int64_t value) {
  
  _impl_.fibonacciresult_ = value;
}
inline void SimpleFibonacciReply::set_fibonacciresult(int64_t value) {
  _internal_set_fibonacciresult(value);
  // @@protoc_insertion_point(field_set:SimpleFibonacciReply.fibonacciResult)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_fibonacci_2ecalculator_2eproto

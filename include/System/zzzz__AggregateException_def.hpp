#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
// Forward declare root types
namespace System {
class AggregateException;
}
// Type: System::AggregateException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2342))
// CS Name: System.AggregateException
class CORDL_TYPE AggregateException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~AggregateException() = default;

// Ctor Parameters [CppParam { name: "", ty: "AggregateException", modifiers: " const&", def_value: None }]
constexpr AggregateException(AggregateException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AggregateException", modifiers: "&&", def_value: None }]
constexpr AggregateException(AggregateException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AggregateException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr AggregateException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AggregateException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AggregateException& operator=(AggregateException&& o) noexcept = default;
  constexpr AggregateException& operator=(AggregateException const& o) noexcept = default;
                


// Fields

 System::Collections::ObjectModel::ReadOnlyCollection_1<System::Exception> __declspec(property(get=__get_m_innerExceptions, put=__set_m_innerExceptions))  m_innerExceptions;

constexpr void __set_m_innerExceptions(System::Collections::ObjectModel::ReadOnlyCollection_1<System::Exception> value) ;

constexpr System::Collections::ObjectModel::ReadOnlyCollection_1<System::Exception> __get_m_innerExceptions() const;


// Properties

 System::Collections::ObjectModel::ReadOnlyCollection_1<System::Exception> __declspec(property(get=get_InnerExceptions))  InnerExceptions;

 ::StringW __declspec(property(get=get_Message))  Message;


// Methods

// Ctor Parameters []
explicit AggregateException() ;

/// @brief Method .ctor addr 0x23b2658 size 0x114 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "innerExceptions", ty: "System::Collections::Generic::IEnumerable_1<System::Exception>", modifiers: "", def_value: None }]
explicit AggregateException(System::Collections::Generic::IEnumerable_1<System::Exception> innerExceptions) ;

/// @brief Method .ctor addr 0x23b276c size 0x58 virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<System::Exception> innerExceptions) ;

// Ctor Parameters [CppParam { name: "innerExceptions", ty: "::ArrayW<System::Exception>", modifiers: "", def_value: None }]
explicit AggregateException(::ArrayW<System::Exception> innerExceptions) ;

/// @brief Method .ctor addr 0x23b2888 size 0x58 virtual false final false
 void _ctor(::ArrayW<System::Exception> innerExceptions) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerExceptions", ty: "System::Collections::Generic::IEnumerable_1<System::Exception>", modifiers: "", def_value: None }]
explicit AggregateException(::StringW message, System::Collections::Generic::IEnumerable_1<System::Exception> innerExceptions) ;

/// @brief Method .ctor addr 0x23b27c4 size 0xc4 virtual false final false
 void _ctor(::StringW message, System::Collections::Generic::IEnumerable_1<System::Exception> innerExceptions) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerExceptions", ty: "::ArrayW<System::Exception>", modifiers: "", def_value: None }]
explicit AggregateException(::StringW message, ::ArrayW<System::Exception> innerExceptions) ;

/// @brief Method .ctor addr 0x23b28e0 size 0x4 virtual false final false
 void _ctor(::StringW message, ::ArrayW<System::Exception> innerExceptions) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerExceptions", ty: "System::Collections::Generic::IList_1<System::Exception>", modifiers: "", def_value: None }]
explicit AggregateException(::StringW message, System::Collections::Generic::IList_1<System::Exception> innerExceptions) ;

/// @brief Method .ctor addr 0x23b28e4 size 0x3c0 virtual false final false
 void _ctor(::StringW message, System::Collections::Generic::IList_1<System::Exception> innerExceptions) ;

// Ctor Parameters [CppParam { name: "innerExceptionInfos", ty: "System::Collections::Generic::IEnumerable_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo>", modifiers: "", def_value: None }]
explicit AggregateException(System::Collections::Generic::IEnumerable_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo> innerExceptionInfos) ;

/// @brief Method .ctor addr 0x23b2cc8 size 0x58 virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo> innerExceptionInfos) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerExceptionInfos", ty: "System::Collections::Generic::IEnumerable_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo>", modifiers: "", def_value: None }]
explicit AggregateException(::StringW message, System::Collections::Generic::IEnumerable_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo> innerExceptionInfos) ;

/// @brief Method .ctor addr 0x23b2d20 size 0xc4 virtual false final false
 void _ctor(::StringW message, System::Collections::Generic::IEnumerable_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo> innerExceptionInfos) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerExceptionInfos", ty: "System::Collections::Generic::IList_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo>", modifiers: "", def_value: None }]
explicit AggregateException(::StringW message, System::Collections::Generic::IList_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo> innerExceptionInfos) ;

/// @brief Method .ctor addr 0x23b2de4 size 0x43c virtual false final false
 void _ctor(::StringW message, System::Collections::Generic::IList_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo> innerExceptionInfos) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit AggregateException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x23b3220 size 0x1e8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x23b3408 size 0x14c virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_InnerExceptions addr 0x23b3554 size 0x8 virtual false final false
 System::Collections::ObjectModel::ReadOnlyCollection_1<System::Exception> get_InnerExceptions() ;

/// @brief Method Flatten addr 0x23b355c size 0x3c0 virtual false final false
 System::AggregateException Flatten() ;

/// @brief Method get_Message addr 0x23b391c size 0x18c virtual true final false
 ::StringW get_Message() ;

/// @brief Method ToString addr 0x23b3aa8 size 0x214 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::AggregateException);
DEFINE_IL2CPP_ARG_TYPE(System::AggregateException, "System", "AggregateException");

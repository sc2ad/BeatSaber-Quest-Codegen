#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
// Type: System.Runtime.ExceptionServices::ExceptionDispatchInfo
namespace System::Runtime::ExceptionServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3342))
// CS Name: System.Runtime.ExceptionServices.ExceptionDispatchInfo
class CORDL_TYPE ExceptionDispatchInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ExceptionDispatchInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExceptionDispatchInfo", modifiers: " const&", def_value: None }]
constexpr ExceptionDispatchInfo(ExceptionDispatchInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExceptionDispatchInfo", modifiers: "&&", def_value: None }]
constexpr ExceptionDispatchInfo(ExceptionDispatchInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExceptionDispatchInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ExceptionDispatchInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExceptionDispatchInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExceptionDispatchInfo& operator=(ExceptionDispatchInfo&& o) noexcept = default;
  constexpr ExceptionDispatchInfo& operator=(ExceptionDispatchInfo const& o) noexcept = default;
                


// Fields

 ::System::Exception __declspec(property(get=__get_m_Exception, put=__set_m_Exception))  m_Exception;

constexpr void __set_m_Exception(::System::Exception value) ;

constexpr ::System::Exception __get_m_Exception() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_stackTrace, put=__set_m_stackTrace))  m_stackTrace;

constexpr void __set_m_stackTrace(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_stackTrace() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_BinaryStackTraceArray))  BinaryStackTraceArray;

 ::System::Exception __declspec(property(get=get_SourceException))  SourceException;


// Methods

// Ctor Parameters [CppParam { name: "exception", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit ExceptionDispatchInfo(::System::Exception exception) ;

/// @brief Method .ctor addr 0x236d800 size 0x128 virtual false final false
 void _ctor(::System::Exception exception) ;

/// @brief Method get_BinaryStackTraceArray addr 0x236d928 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_BinaryStackTraceArray() ;

/// @brief Method Capture addr 0x236d3bc size 0xcc virtual false final false
static ::System::Runtime::ExceptionServices::ExceptionDispatchInfo Capture(::System::Exception source) ;

/// @brief Method get_SourceException addr 0x236d930 size 0x8 virtual false final false
 ::System::Exception get_SourceException() ;

/// @brief Method Throw addr 0x236d488 size 0x44 virtual false final false
 void Throw() ;

/// @brief Method Throw addr 0x236d938 size 0x18 virtual false final false
static void Throw(::System::Exception source) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::ExceptionServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::ExceptionServices::ExceptionDispatchInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::ExceptionServices::ExceptionDispatchInfo, "System.Runtime.ExceptionServices", "ExceptionDispatchInfo");

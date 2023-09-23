#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
struct LazyState;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System {
class Exception;
}
namespace System::Threading {
struct LazyThreadSafetyMode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class LazyHelper;
}
// Type: System::LazyHelper
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2430))
// CS Name: System.LazyHelper
class CORDL_TYPE LazyHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LazyHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "LazyHelper", modifiers: " const&", def_value: None }]
constexpr LazyHelper(LazyHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LazyHelper", modifiers: "&&", def_value: None }]
constexpr LazyHelper(LazyHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LazyHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LazyHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LazyHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LazyHelper& operator=(LazyHelper&& o) noexcept = default;
  constexpr LazyHelper& operator=(LazyHelper const& o) noexcept = default;
                


// Fields

static System::LazyHelper __declspec(property(get=__get_NoneViaConstructor, put=__set_NoneViaConstructor))  NoneViaConstructor;

static void __set_NoneViaConstructor(System::LazyHelper value) ;

static System::LazyHelper __get_NoneViaConstructor() ;

static System::LazyHelper __declspec(property(get=__get_NoneViaFactory, put=__set_NoneViaFactory))  NoneViaFactory;

static void __set_NoneViaFactory(System::LazyHelper value) ;

static System::LazyHelper __get_NoneViaFactory() ;

static System::LazyHelper __declspec(property(get=__get_PublicationOnlyViaConstructor, put=__set_PublicationOnlyViaConstructor))  PublicationOnlyViaConstructor;

static void __set_PublicationOnlyViaConstructor(System::LazyHelper value) ;

static System::LazyHelper __get_PublicationOnlyViaConstructor() ;

static System::LazyHelper __declspec(property(get=__get_PublicationOnlyViaFactory, put=__set_PublicationOnlyViaFactory))  PublicationOnlyViaFactory;

static void __set_PublicationOnlyViaFactory(System::LazyHelper value) ;

static System::LazyHelper __get_PublicationOnlyViaFactory() ;

static System::LazyHelper __declspec(property(get=__get_PublicationOnlyWaitForOtherThreadToPublish, put=__set_PublicationOnlyWaitForOtherThreadToPublish))  PublicationOnlyWaitForOtherThreadToPublish;

static void __set_PublicationOnlyWaitForOtherThreadToPublish(System::LazyHelper value) ;

static System::LazyHelper __get_PublicationOnlyWaitForOtherThreadToPublish() ;

 System::LazyState __declspec(property(get=__get__State_k__BackingField, put=__set__State_k__BackingField))  _State_k__BackingField;

constexpr void __set__State_k__BackingField(System::LazyState value) ;

constexpr System::LazyState __get__State_k__BackingField() const;

 System::Runtime::ExceptionServices::ExceptionDispatchInfo __declspec(property(get=__get__exceptionDispatch, put=__set__exceptionDispatch))  _exceptionDispatch;

constexpr void __set__exceptionDispatch(System::Runtime::ExceptionServices::ExceptionDispatchInfo value) ;

constexpr System::Runtime::ExceptionServices::ExceptionDispatchInfo __get__exceptionDispatch() const;


// Properties

 System::LazyState __declspec(property(get=get_State))  State;


// Methods

/// @brief Method get_State addr 0x2440978 size 0x8 virtual false final false
 System::LazyState get_State() ;

// Ctor Parameters [CppParam { name: "state", ty: "System::LazyState", modifiers: "", def_value: None }]
explicit LazyHelper(System::LazyState state) ;

/// @brief Method .ctor addr 0x2440980 size 0x28 virtual false final false
 void _ctor(System::LazyState state) ;

// Ctor Parameters [CppParam { name: "mode", ty: "System::Threading::LazyThreadSafetyMode", modifiers: "", def_value: None }, CppParam { name: "exception", ty: "System::Exception", modifiers: "", def_value: None }]
explicit LazyHelper(System::Threading::LazyThreadSafetyMode mode, System::Exception exception) ;

/// @brief Method .ctor addr 0x24409a8 size 0x50 virtual false final false
 void _ctor(System::Threading::LazyThreadSafetyMode mode, System::Exception exception) ;

/// @brief Method ThrowException addr 0x24409f8 size 0x1c virtual false final false
 void ThrowException() ;

/// @brief Method Create addr 0x2440a14 size 0x140 virtual false final false
static System::LazyHelper Create(System::Threading::LazyThreadSafetyMode mode, bool useDefaultConstructor) ;

/// @brief Method CreateViaDefaultConstructor addr 0x2440b54 size 0xcc virtual false final false
static ::bs_hook::Il2CppWrapperType CreateViaDefaultConstructor(System::Type type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::LazyHelper);
DEFINE_IL2CPP_ARG_TYPE(System::LazyHelper, "System", "LazyHelper");

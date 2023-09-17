#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
class Exception;
}
namespace Internal::Runtime::Augments {
class ReflectionExecutionDomainCallbacks;
}
// Forward declare root types
namespace Internal::Runtime::Augments {
class RuntimeAugments;
}
// Type: Internal.Runtime.Augments::RuntimeAugments
namespace Internal::Runtime::Augments {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2306))
// CS Name: Internal.Runtime.Augments.RuntimeAugments
class CORDL_TYPE RuntimeAugments : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RuntimeAugments() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeAugments", modifiers: " const&", def_value: None }]
constexpr RuntimeAugments(RuntimeAugments const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeAugments", modifiers: "&&", def_value: None }]
constexpr RuntimeAugments(RuntimeAugments&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeAugments(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RuntimeAugments& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeAugments& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeAugments& operator=(RuntimeAugments&& o) noexcept = default;
  constexpr RuntimeAugments& operator=(RuntimeAugments const& o) noexcept = default;
                


// Fields

static ::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks __declspec(property(get=__get_s_reflectionExecutionDomainCallbacks, put=__set_s_reflectionExecutionDomainCallbacks))  s_reflectionExecutionDomainCallbacks;

static void __set_s_reflectionExecutionDomainCallbacks(::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks value) ;

static ::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks __get_s_reflectionExecutionDomainCallbacks() ;


// Properties

static ::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks __declspec(property(get=get_Callbacks))  Callbacks;


// Methods

/// @brief Method ReportUnhandledException addr 0x22befac size 0x20 virtual false final false
static void ReportUnhandledException(::System::Exception exception) ;

/// @brief Method get_Callbacks addr 0x22befcc size 0x58 virtual false final false
static ::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks get_Callbacks() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Internal::Runtime::Augments
} // end anonymous namespace
NEED_NO_BOX(::Internal::Runtime::Augments::RuntimeAugments);
DEFINE_IL2CPP_ARG_TYPE(::Internal::Runtime::Augments::RuntimeAugments, "Internal.Runtime.Augments", "RuntimeAugments");

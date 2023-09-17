#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class EssentialHelpers;
}
// Type: ::EssentialHelpers
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13795))
// CS Name: EssentialHelpers
class CORDL_TYPE EssentialHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EssentialHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "EssentialHelpers", modifiers: " const&", def_value: None }]
constexpr EssentialHelpers(EssentialHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EssentialHelpers", modifiers: "&&", def_value: None }]
constexpr EssentialHelpers(EssentialHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EssentialHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EssentialHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EssentialHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EssentialHelpers& operator=(EssentialHelpers&& o) noexcept = default;
  constexpr EssentialHelpers& operator=(EssentialHelpers const& o) noexcept = default;
                


// Properties

static double_t __declspec(property(get=get_CurrentTimeStamp))  CurrentTimeStamp;


// Methods

/// @brief Method get_CurrentTimeStamp addr 0x1f77554 size 0xb4 virtual false final false
static double_t get_CurrentTimeStamp() ;

/// @brief Method SafeDestroy addr 0x1f77608 size 0xa8 virtual false final false
static void SafeDestroy(::UnityEngine::Object obj) ;

/// @brief Method GetOrAddComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T GetOrAddComponent(::UnityEngine::GameObject go) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::EssentialHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EssentialHelpers, "", "EssentialHelpers");

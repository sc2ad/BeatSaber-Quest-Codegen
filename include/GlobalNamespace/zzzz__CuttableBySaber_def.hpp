#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class Saber;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace GlobalNamespace {
class CuttableBySaber;
}
namespace GlobalNamespace {
class ____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate;
}
// Type: ::WasCutBySaberDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5375))
// CS Name: CuttableBySaber::WasCutBySaberDelegate
class CORDL_TYPE ____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate(____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate(____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate& operator=(____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate&& o) noexcept = default;
  constexpr ____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate& operator=(____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x210a79c size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x210a8cc size 0x24 virtual true final false
 void Invoke(::GlobalNamespace::Saber saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec) ;

/// @brief Method BeginInvoke addr 0x210a8f0 size 0xec virtual true final false
 ::System::IAsyncResult BeginInvoke(::GlobalNamespace::Saber saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x210a9dc size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CuttableBySaber
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5376))
// CS Name: CuttableBySaber
class CORDL_TYPE CuttableBySaber : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using WasCutBySaberDelegate = ::GlobalNamespace::____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CuttableBySaber() = default;

// Ctor Parameters [CppParam { name: "", ty: "CuttableBySaber", modifiers: " const&", def_value: None }]
constexpr CuttableBySaber(CuttableBySaber const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CuttableBySaber", modifiers: "&&", def_value: None }]
constexpr CuttableBySaber(CuttableBySaber&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CuttableBySaber(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CuttableBySaber& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CuttableBySaber& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CuttableBySaber& operator=(CuttableBySaber&& o) noexcept = default;
  constexpr CuttableBySaber& operator=(CuttableBySaber const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate __declspec(property(get=__get_wasCutBySaberEvent, put=__set_wasCutBySaberEvent))  wasCutBySaberEvent;

constexpr void __set_wasCutBySaberEvent(::GlobalNamespace::____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate __get_wasCutBySaberEvent() const;


// Properties

 bool __declspec(property(get=get_canBeCut, put=set_canBeCut))  canBeCut;

 float_t __declspec(property(get=get_radius))  radius;


// Methods

/// @brief Method add_wasCutBySaberEvent addr 0x210a664 size 0x9c virtual false final false
 void add_wasCutBySaberEvent(::GlobalNamespace::____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate value) ;

/// @brief Method remove_wasCutBySaberEvent addr 0x210a700 size 0x9c virtual false final false
 void remove_wasCutBySaberEvent(::GlobalNamespace::____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate value) ;

/// @brief Method CallWasCutBySaberEvent addr 0x210a5d0 size 0x2c virtual false final false
 void CallWasCutBySaberEvent(::GlobalNamespace::Saber saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec) ;

/// @brief Method get_canBeCut addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_canBeCut() ;

/// @brief Method set_canBeCut addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_canBeCut(bool value) ;

/// @brief Method get_radius addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_radius() ;

/// @brief Method Cut addr 0x0 size 0xffffffffffffffff virtual true final false
 void Cut(::GlobalNamespace::Saber saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec) ;

// Ctor Parameters []
explicit CuttableBySaber() ;

/// @brief Method .ctor addr 0x210a65c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::CuttableBySaber);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CuttableBySaber, "", "CuttableBySaber");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__CuttableBySaber__WasCutBySaberDelegate, "", "CuttableBySaber/WasCutBySaberDelegate");

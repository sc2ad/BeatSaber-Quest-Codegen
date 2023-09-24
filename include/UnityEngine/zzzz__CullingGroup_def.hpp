#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine {
class UnityEngine__CullingGroup__StateChanged;
}
namespace UnityEngine {
struct CullingGroupEvent;
}
// Forward declare root types
namespace UnityEngine {
class CullingGroup;
}
namespace UnityEngine {
class UnityEngine__CullingGroup__StateChanged;
}
// Type: ::StateChanged
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10089))
// CS Name: UnityEngine.CullingGroup::StateChanged
class CORDL_TYPE UnityEngine__CullingGroup__StateChanged : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__CullingGroup__StateChanged() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__CullingGroup__StateChanged", modifiers: " const&", def_value: None }]
constexpr UnityEngine__CullingGroup__StateChanged(UnityEngine__CullingGroup__StateChanged const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__CullingGroup__StateChanged", modifiers: "&&", def_value: None }]
constexpr UnityEngine__CullingGroup__StateChanged(UnityEngine__CullingGroup__StateChanged&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__CullingGroup__StateChanged(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__CullingGroup__StateChanged& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__CullingGroup__StateChanged& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__CullingGroup__StateChanged& operator=(UnityEngine__CullingGroup__StateChanged&& o) noexcept = default;
  constexpr UnityEngine__CullingGroup__StateChanged& operator=(UnityEngine__CullingGroup__StateChanged const& o) noexcept = default;
                


// Methods

static UnityEngine::UnityEngine__CullingGroup__StateChanged New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b4f5c8 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b4f68c size 0x14 virtual true final false
 void Invoke(UnityEngine::CullingGroupEvent sphere) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::CullingGroup
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10090))
// CS Name: UnityEngine.CullingGroup
class CORDL_TYPE CullingGroup : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using StateChanged = UnityEngine::UnityEngine__CullingGroup__StateChanged;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CullingGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "CullingGroup", modifiers: " const&", def_value: None }]
constexpr CullingGroup(CullingGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CullingGroup", modifiers: "&&", def_value: None }]
constexpr CullingGroup(CullingGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CullingGroup(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CullingGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CullingGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CullingGroup& operator=(CullingGroup&& o) noexcept = default;
  constexpr CullingGroup& operator=(CullingGroup const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;

 UnityEngine::UnityEngine__CullingGroup__StateChanged __declspec(property(get=__get_m_OnStateChanged, put=__set_m_OnStateChanged))  m_OnStateChanged;

constexpr void __set_m_OnStateChanged(UnityEngine::UnityEngine__CullingGroup__StateChanged value) ;

constexpr UnityEngine::UnityEngine__CullingGroup__StateChanged __get_m_OnStateChanged() const;


// Methods

/// @brief Method SendEvents addr 0x2b4f56c size 0x5c virtual false final false
static void SendEvents(UnityEngine::CullingGroup cullingGroup, ::cordl_internals::intptr_t eventsPtr, int32_t count) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::CullingGroup);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CullingGroup, "UnityEngine", "CullingGroup");
NEED_NO_BOX(UnityEngine::UnityEngine__CullingGroup__StateChanged);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__CullingGroup__StateChanged, "UnityEngine", "CullingGroup/StateChanged");

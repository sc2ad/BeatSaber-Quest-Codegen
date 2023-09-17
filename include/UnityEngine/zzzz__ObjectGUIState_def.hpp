#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine {
class ObjectGUIState;
}
// Type: UnityEngine::ObjectGUIState
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14770))
// CS Name: UnityEngine.ObjectGUIState
class CORDL_TYPE ObjectGUIState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ObjectGUIState() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectGUIState", modifiers: " const&", def_value: None }]
constexpr ObjectGUIState(ObjectGUIState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectGUIState", modifiers: "&&", def_value: None }]
constexpr ObjectGUIState(ObjectGUIState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectGUIState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ObjectGUIState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectGUIState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectGUIState& operator=(ObjectGUIState&& o) noexcept = default;
  constexpr ObjectGUIState& operator=(ObjectGUIState const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;


// Methods

// Ctor Parameters []
explicit ObjectGUIState() ;

/// @brief Method .ctor addr 0x2b8c330 size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method Dispose addr 0x2b8c3a0 size 0x60 virtual true final true
 void Dispose() ;

/// @brief Method Finalize addr 0x2b8c4a0 size 0x94 virtual true final false
 void Finalize() ;

/// @brief Method Destroy addr 0x2b8c400 size 0xa0 virtual false final false
 void Destroy() ;

/// @brief Method Internal_Create addr 0x2b8c378 size 0x28 virtual false final false
static ::cordl_internals::intptr_t Internal_Create() ;

/// @brief Method Internal_Destroy addr 0x2b8c534 size 0x3c virtual false final false
static void Internal_Destroy(::cordl_internals::intptr_t ptr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ObjectGUIState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ObjectGUIState, "UnityEngine", "ObjectGUIState");

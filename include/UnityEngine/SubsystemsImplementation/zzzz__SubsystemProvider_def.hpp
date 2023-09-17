#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::SubsystemsImplementation {
class SubsystemProvider;
}
// Type: UnityEngine.SubsystemsImplementation::SubsystemProvider
namespace UnityEngine::SubsystemsImplementation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15858))
// CS Name: UnityEngine.SubsystemsImplementation.SubsystemProvider
class CORDL_TYPE SubsystemProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SubsystemProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemProvider", modifiers: " const&", def_value: None }]
constexpr SubsystemProvider(SubsystemProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemProvider", modifiers: "&&", def_value: None }]
constexpr SubsystemProvider(SubsystemProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubsystemProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SubsystemProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubsystemProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubsystemProvider& operator=(SubsystemProvider&& o) noexcept = default;
  constexpr SubsystemProvider& operator=(SubsystemProvider const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_Running, put=__set_m_Running))  m_Running;

constexpr void __set_m_Running(bool value) ;

constexpr bool __get_m_Running() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::SubsystemsImplementation
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::SubsystemsImplementation::SubsystemProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SubsystemsImplementation::SubsystemProvider, "UnityEngine.SubsystemsImplementation", "SubsystemProvider");

#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace Tayx::Graphy::Ram {
class G_RamMonitor;
}
// Type: Tayx.Graphy.Ram::G_RamMonitor
namespace Tayx::Graphy::Ram {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15200))
// CS Name: Tayx.Graphy.Ram.G_RamMonitor
class CORDL_TYPE G_RamMonitor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~G_RamMonitor() = default;

// Ctor Parameters [CppParam { name: "", ty: "G_RamMonitor", modifiers: " const&", def_value: None }]
constexpr G_RamMonitor(G_RamMonitor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "G_RamMonitor", modifiers: "&&", def_value: None }]
constexpr G_RamMonitor(G_RamMonitor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit G_RamMonitor(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr G_RamMonitor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr G_RamMonitor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr G_RamMonitor& operator=(G_RamMonitor&& o) noexcept = default;
  constexpr G_RamMonitor& operator=(G_RamMonitor const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__AllocatedRam_k__BackingField, put=__set__AllocatedRam_k__BackingField))  _AllocatedRam_k__BackingField;

constexpr void __set__AllocatedRam_k__BackingField(float_t value) ;

constexpr float_t __get__AllocatedRam_k__BackingField() const;

 float_t __declspec(property(get=__get__ReservedRam_k__BackingField, put=__set__ReservedRam_k__BackingField))  _ReservedRam_k__BackingField;

constexpr void __set__ReservedRam_k__BackingField(float_t value) ;

constexpr float_t __get__ReservedRam_k__BackingField() const;

 float_t __declspec(property(get=__get__MonoRam_k__BackingField, put=__set__MonoRam_k__BackingField))  _MonoRam_k__BackingField;

constexpr void __set__MonoRam_k__BackingField(float_t value) ;

constexpr float_t __get__MonoRam_k__BackingField() const;


// Properties

 float_t __declspec(property(get=get_AllocatedRam, put=set_AllocatedRam))  AllocatedRam;

 float_t __declspec(property(get=get_ReservedRam, put=set_ReservedRam))  ReservedRam;

 float_t __declspec(property(get=get_MonoRam, put=set_MonoRam))  MonoRam;


// Methods

/// @brief Method get_AllocatedRam addr 0x2874f34 size 0x8 virtual false final false
 float_t get_AllocatedRam() ;

/// @brief Method set_AllocatedRam addr 0x2874f3c size 0x8 virtual false final false
 void set_AllocatedRam(float_t value) ;

/// @brief Method get_ReservedRam addr 0x2874f44 size 0x8 virtual false final false
 float_t get_ReservedRam() ;

/// @brief Method set_ReservedRam addr 0x2874f4c size 0x8 virtual false final false
 void set_ReservedRam(float_t value) ;

/// @brief Method get_MonoRam addr 0x2874f54 size 0x8 virtual false final false
 float_t get_MonoRam() ;

/// @brief Method set_MonoRam addr 0x2874f5c size 0x8 virtual false final false
 void set_MonoRam(float_t value) ;

/// @brief Method Update addr 0x2874f64 size 0x5c virtual false final false
 void Update() ;

// Ctor Parameters []
explicit G_RamMonitor() ;

/// @brief Method .ctor addr 0x2874fc0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy::Ram
} // end anonymous namespace
NEED_NO_BOX(::Tayx::Graphy::Ram::G_RamMonitor);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Ram::G_RamMonitor, "Tayx.Graphy.Ram", "G_RamMonitor");

#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
class Ping;
}
// Type: UnityEngine::Ping
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10004))
// CS Name: UnityEngine.Ping
class CORDL_TYPE Ping : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Ping() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ping", modifiers: " const&", def_value: None }]
constexpr Ping(Ping const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ping", modifiers: "&&", def_value: None }]
constexpr Ping(Ping&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ping(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Ping& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ping& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ping& operator=(Ping&& o) noexcept = default;
  constexpr Ping& operator=(Ping const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;


// Properties

 bool __declspec(property(get=get_isDone))  isDone;

 int32_t __declspec(property(get=get_time))  time;


// Methods

static UnityEngine::Ping New_ctor(::StringW address) ;

/// @brief Method .ctor addr 0x2b2c800 size 0x50 virtual false final false
 void _ctor(::StringW address) ;

/// @brief Method Finalize addr 0x2b2c88c size 0x94 virtual true final false
 void Finalize() ;

/// @brief Method DestroyPing addr 0x2b2c920 size 0xa0 virtual false final false
 void DestroyPing() ;

/// @brief Method Internal_Destroy addr 0x2b2c9c0 size 0x3c virtual false final false
static void Internal_Destroy(::cordl_internals::intptr_t ptr) ;

/// @brief Method Internal_Create addr 0x2b2c850 size 0x3c virtual false final false
static ::cordl_internals::intptr_t Internal_Create(::StringW address) ;

/// @brief Method get_isDone addr 0x2b2c9fc size 0x90 virtual false final false
 bool get_isDone() ;

/// @brief Method Internal_IsDone addr 0x2b2ca8c size 0x3c virtual false final false
 bool Internal_IsDone() ;

/// @brief Method get_time addr 0x2b2cac8 size 0x3c virtual false final false
 int32_t get_time() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Ping);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Ping, "UnityEngine", "Ping");

#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
class GlobalJavaObjectRef;
}
// Type: UnityEngine::GlobalJavaObjectRef
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14878))
// CS Name: UnityEngine.GlobalJavaObjectRef
class CORDL_TYPE GlobalJavaObjectRef : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalJavaObjectRef() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalJavaObjectRef", modifiers: " const&", def_value: None }]
constexpr GlobalJavaObjectRef(GlobalJavaObjectRef const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalJavaObjectRef", modifiers: "&&", def_value: None }]
constexpr GlobalJavaObjectRef(GlobalJavaObjectRef&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalJavaObjectRef(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalJavaObjectRef& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalJavaObjectRef& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalJavaObjectRef& operator=(GlobalJavaObjectRef&& o) noexcept = default;
  constexpr GlobalJavaObjectRef& operator=(GlobalJavaObjectRef const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_disposed, put=__set_m_disposed))  m_disposed;

constexpr void __set_m_disposed(bool value) ;

constexpr bool __get_m_disposed() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_jobject, put=__set_m_jobject))  m_jobject;

constexpr void __set_m_jobject(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_jobject() const;


// Methods

// Ctor Parameters [CppParam { name: "jobject", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GlobalJavaObjectRef(::cordl_internals::intptr_t jobject) ;

/// @brief Method .ctor addr 0x2b0e0d8 size 0xb4 virtual false final false
 void _ctor(::cordl_internals::intptr_t jobject) ;

/// @brief Method Finalize addr 0x2b0e1c8 size 0x94 virtual true final false
 void Finalize() ;

/// @brief Method op_Implicit addr 0x2b0e2d8 size 0x18 virtual false final false
static ::cordl_internals::intptr_t op_Implicit___cordl_internals__intptr_t(::UnityEngine::GlobalJavaObjectRef obj) ;

/// @brief Method Dispose addr 0x2b0e25c size 0x7c virtual false final false
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::GlobalJavaObjectRef);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GlobalJavaObjectRef, "UnityEngine", "GlobalJavaObjectRef");

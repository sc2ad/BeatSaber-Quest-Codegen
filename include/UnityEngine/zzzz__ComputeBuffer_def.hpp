#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
class ComputeBuffer;
}
// Type: UnityEngine::ComputeBuffer
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10201))
// CS Name: UnityEngine.ComputeBuffer
class CORDL_TYPE ComputeBuffer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ComputeBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "ComputeBuffer", modifiers: " const&", def_value: None }]
constexpr ComputeBuffer(ComputeBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ComputeBuffer", modifiers: "&&", def_value: None }]
constexpr ComputeBuffer(ComputeBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ComputeBuffer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ComputeBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ComputeBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ComputeBuffer& operator=(ComputeBuffer&& o) noexcept = default;
  constexpr ComputeBuffer& operator=(ComputeBuffer const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::ComputeBuffer);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ComputeBuffer, "UnityEngine", "ComputeBuffer");

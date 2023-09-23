#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::UIElements::UIR {
struct Alloc;
}
namespace UnityEngine::UIElements::UIR {
class BestFitAllocator;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class GPUBufferAllocator;
}
// Type: UnityEngine.UIElements.UIR::GPUBufferAllocator
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7537))
// CS Name: UnityEngine.UIElements.UIR.GPUBufferAllocator
class CORDL_TYPE GPUBufferAllocator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GPUBufferAllocator() = default;

// Ctor Parameters [CppParam { name: "", ty: "GPUBufferAllocator", modifiers: " const&", def_value: None }]
constexpr GPUBufferAllocator(GPUBufferAllocator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GPUBufferAllocator", modifiers: "&&", def_value: None }]
constexpr GPUBufferAllocator(GPUBufferAllocator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GPUBufferAllocator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GPUBufferAllocator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GPUBufferAllocator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GPUBufferAllocator& operator=(GPUBufferAllocator&& o) noexcept = default;
  constexpr GPUBufferAllocator& operator=(GPUBufferAllocator const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UIR::BestFitAllocator __declspec(property(get=__get_m_Low, put=__set_m_Low))  m_Low;

constexpr void __set_m_Low(UnityEngine::UIElements::UIR::BestFitAllocator value) ;

constexpr UnityEngine::UIElements::UIR::BestFitAllocator __get_m_Low() const;

 UnityEngine::UIElements::UIR::BestFitAllocator __declspec(property(get=__get_m_High, put=__set_m_High))  m_High;

constexpr void __set_m_High(UnityEngine::UIElements::UIR::BestFitAllocator value) ;

constexpr UnityEngine::UIElements::UIR::BestFitAllocator __get_m_High() const;


// Properties

 bool __declspec(property(get=get_isEmpty))  isEmpty;


// Methods

// Ctor Parameters [CppParam { name: "maxSize", ty: "uint32_t", modifiers: "", def_value: None }]
explicit GPUBufferAllocator(uint32_t maxSize) ;

/// @brief Method .ctor addr 0x2c5c748 size 0x94 virtual false final false
 void _ctor(uint32_t maxSize) ;

/// @brief Method Allocate addr 0x2c58198 size 0x13c virtual false final false
 UnityEngine::UIElements::UIR::Alloc Allocate(uint32_t size, bool shortLived) ;

/// @brief Method Free addr 0x2c582d4 size 0x84 virtual false final false
 void Free(UnityEngine::UIElements::UIR::Alloc alloc) ;

/// @brief Method get_isEmpty addr 0x2c5c814 size 0x3c virtual false final false
 bool get_isEmpty() ;

/// @brief Method HighLowCollide addr 0x2c5c7dc size 0x38 virtual false final false
 bool HighLowCollide() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(UnityEngine::UIElements::UIR::GPUBufferAllocator);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::GPUBufferAllocator, "UnityEngine.UIElements.UIR", "GPUBufferAllocator");

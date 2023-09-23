#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace ENet {
class ArrayPool;
}
// Type: ENet::ArrayPool
namespace ENet {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15267))
// CS Name: ENet.ArrayPool
class CORDL_TYPE ArrayPool : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ArrayPool() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool", modifiers: " const&", def_value: None }]
constexpr ArrayPool(ArrayPool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool", modifiers: "&&", def_value: None }]
constexpr ArrayPool(ArrayPool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArrayPool(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ArrayPool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArrayPool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArrayPool& operator=(ArrayPool&& o) noexcept = default;
  constexpr ArrayPool& operator=(ArrayPool const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_byteBuffer, put=__set_byteBuffer))  byteBuffer;

static void __set_byteBuffer(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_byteBuffer() ;

static ::ArrayW<::cordl_internals::intptr_t> __declspec(property(get=__get_pointerBuffer, put=__set_pointerBuffer))  pointerBuffer;

static void __set_pointerBuffer(::ArrayW<::cordl_internals::intptr_t> value) ;

static ::ArrayW<::cordl_internals::intptr_t> __get_pointerBuffer() ;


// Methods

/// @brief Method GetByteBuffer addr 0x207cd74 size 0x94 virtual false final false
static ::ArrayW<uint8_t> GetByteBuffer() ;

/// @brief Method GetPointerBuffer addr 0x207ce08 size 0x94 virtual false final false
static ::ArrayW<::cordl_internals::intptr_t> GetPointerBuffer() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ENet
NEED_NO_BOX(ENet::ArrayPool);
DEFINE_IL2CPP_ARG_TYPE(ENet::ArrayPool, "ENet", "ArrayPool");

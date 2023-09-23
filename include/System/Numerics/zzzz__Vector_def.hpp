#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Numerics {
template<typename T>
struct Vector_1;
}
// Forward declare root types
namespace System::Numerics {
class Vector;
}
// Type: System.Numerics::Vector
namespace System::Numerics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3546))
// CS Name: System.Numerics.Vector
class CORDL_TYPE Vector : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Vector() = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector", modifiers: " const&", def_value: None }]
constexpr Vector(Vector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector", modifiers: "&&", def_value: None }]
constexpr Vector(Vector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Vector(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Vector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Vector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Vector& operator=(Vector&& o) noexcept = default;
  constexpr Vector& operator=(Vector const& o) noexcept = default;
                


// Properties

static bool __declspec(property(get=get_IsHardwareAccelerated))  IsHardwareAccelerated;


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Numerics::Vector_1<T> Equals(System::Numerics::Vector_1<T> left, System::Numerics::Vector_1<T> right) ;

/// @brief Method get_IsHardwareAccelerated addr 0x238ec2c size 0x8 virtual false final false
static bool get_IsHardwareAccelerated() ;

/// @brief Method AsVectorUInt64 addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Numerics::Vector_1<uint64_t> AsVectorUInt64(System::Numerics::Vector_1<T> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Numerics
NEED_NO_BOX(System::Numerics::Vector);
DEFINE_IL2CPP_ARG_TYPE(System::Numerics::Vector, "System.Numerics", "Vector");

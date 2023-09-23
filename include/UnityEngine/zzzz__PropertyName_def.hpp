#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine {
struct PropertyName;
}
// Type: UnityEngine::PropertyName
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10101))
// CS Name: UnityEngine.PropertyName
struct CORDL_TYPE PropertyName : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::PropertyName>
constexpr operator  System::IEquatable_1<UnityEngine::PropertyName>() const;

// Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PropertyName(int32_t id) noexcept;


                    constexpr PropertyName(PropertyName const&) = default;
                    constexpr PropertyName(PropertyName&&) = default;
                    constexpr PropertyName& operator=(PropertyName const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PropertyName& operator=(PropertyName&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PropertyName(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(int32_t value) ;

constexpr int32_t __get_id() const;


// Methods

/// @brief Method .ctor addr 0x2b51440 size 0x5c virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method .ctor addr 0x2b514e8 size 0x8 virtual false final false
 void _ctor(UnityEngine::PropertyName other) ;

/// @brief Method IsNullOrEmpty addr 0x2b514f0 size 0xc virtual false final false
static bool IsNullOrEmpty(UnityEngine::PropertyName prop) ;

/// @brief Method op_Equality addr 0x2b514fc size 0xc virtual false final false
static bool op_Equality(UnityEngine::PropertyName lhs, UnityEngine::PropertyName rhs) ;

/// @brief Method GetHashCode addr 0x2b51508 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2b51510 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0x2b51588 size 0x10 virtual true final true
 bool Equals(UnityEngine::PropertyName other) ;

/// @brief Method op_Implicit addr 0x2b51598 size 0x4c virtual false final false
static UnityEngine::PropertyName op_Implicit_UnityEngine__PropertyName(::StringW name) ;

/// @brief Method ToString addr 0x2b515e4 size 0x84 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PropertyName, "UnityEngine", "PropertyName");

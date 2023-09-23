#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct PropertyName;
}
namespace UnityEngine {
class IExposedPropertyTable;
}
// Forward declare root types
namespace UnityEngine {
template<typename T>
struct ExposedReference_1;
}
namespace UnityEngine {
template<::cordl_internals::il2cpp_reference_type T>
struct ExposedReference_1<T>;
}
// Type: UnityEngine::ExposedReference`1
// Type: UnityEngine::ExposedReference`1
namespace UnityEngine {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9988)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9988), inst: 2 })
// CS Name: UnityEngine.ExposedReference`1
struct CORDL_TYPE ExposedReference_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "exposedName", ty: "UnityEngine::PropertyName", modifiers: "", def_value: None }, CppParam { name: "defaultValue", ty: "UnityEngine::Object", modifiers: "", def_value: None }]
constexpr ExposedReference_1(UnityEngine::PropertyName exposedName, UnityEngine::Object defaultValue) noexcept;


                    constexpr ExposedReference_1(ExposedReference_1 const&) = default;
                    constexpr ExposedReference_1(ExposedReference_1&&) = default;
                    constexpr ExposedReference_1& operator=(ExposedReference_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ExposedReference_1& operator=(ExposedReference_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ExposedReference_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::PropertyName __declspec(property(get=__get_exposedName, put=__set_exposedName))  exposedName;

constexpr void __set_exposedName(UnityEngine::PropertyName value) ;

constexpr UnityEngine::PropertyName __get_exposedName() const;

 UnityEngine::Object __declspec(property(get=__get_defaultValue, put=__set_defaultValue))  defaultValue;

constexpr void __set_defaultValue(UnityEngine::Object value) ;

constexpr UnityEngine::Object __get_defaultValue() const;


// Methods

/// @brief Method Resolve addr 0x0 size 0xffffffffffffffff virtual false final false
 T Resolve(UnityEngine::IExposedPropertyTable resolver) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::ExposedReference_1, "UnityEngine", "ExposedReference`1");

#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode;
}
namespace GlobalNamespace {
class HEU_ScriptMeshInputUVLayoutExample;
}
// Type: ::OutputMode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9531))
// CS Name: HEU_ScriptMeshInputUVLayoutExample::OutputMode
struct CORDL_TYPE GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode(int32_t value__) noexcept;


                    constexpr GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode(GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode const&) = default;
                    constexpr GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode(GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode&&) = default;
                    constexpr GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode& operator=(GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode& operator=(GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode_Unwrapped : int32_t {
__COPY = 0,
__REPLACE = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field COPY offset 0
static GlobalNamespace::GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode const COPY;

/// @brief Field REPLACE offset 0
static GlobalNamespace::GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode const REPLACE;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HEU_ScriptMeshInputUVLayoutExample
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9532))
// CS Name: HEU_ScriptMeshInputUVLayoutExample
class CORDL_TYPE HEU_ScriptMeshInputUVLayoutExample : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using OutputMode = GlobalNamespace::GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_ScriptMeshInputUVLayoutExample() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ScriptMeshInputUVLayoutExample", modifiers: " const&", def_value: None }]
constexpr HEU_ScriptMeshInputUVLayoutExample(HEU_ScriptMeshInputUVLayoutExample const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ScriptMeshInputUVLayoutExample", modifiers: "&&", def_value: None }]
constexpr HEU_ScriptMeshInputUVLayoutExample(HEU_ScriptMeshInputUVLayoutExample&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_ScriptMeshInputUVLayoutExample(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_ScriptMeshInputUVLayoutExample& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_ScriptMeshInputUVLayoutExample& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_ScriptMeshInputUVLayoutExample& operator=(HEU_ScriptMeshInputUVLayoutExample&& o) noexcept = default;
  constexpr HEU_ScriptMeshInputUVLayoutExample& operator=(HEU_ScriptMeshInputUVLayoutExample const& o) noexcept = default;
                


// Methods

/// @brief Method ApplyUVLayoutTo addr 0x1fd984c size 0x840 virtual false final false
static void ApplyUVLayoutTo(::ArrayW<UnityEngine::GameObject> gameObjects, GlobalNamespace::GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode outputMode, ::StringW output_name_suffix) ;

// Ctor Parameters []
explicit HEU_ScriptMeshInputUVLayoutExample() ;

/// @brief Method .ctor addr 0x1fda134 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode, "", "HEU_ScriptMeshInputUVLayoutExample/OutputMode");
NEED_NO_BOX(GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample, "", "HEU_ScriptMeshInputUVLayoutExample");

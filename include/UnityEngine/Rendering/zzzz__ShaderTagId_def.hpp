#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
// Type: UnityEngine.Rendering::ShaderTagId
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10292))
// CS Name: UnityEngine.Rendering.ShaderTagId
struct CORDL_TYPE ShaderTagId : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::Rendering::ShaderTagId>
constexpr operator  ::System::IEquatable_1<::UnityEngine::Rendering::ShaderTagId>() const;

// Ctor Parameters [CppParam { name: "m_Id", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ShaderTagId(int32_t m_Id) noexcept;


                    constexpr ShaderTagId(ShaderTagId const&) = default;
                    constexpr ShaderTagId(ShaderTagId&&) = default;
                    constexpr ShaderTagId& operator=(ShaderTagId const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ShaderTagId& operator=(ShaderTagId&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ShaderTagId(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_Id, put=__set_m_Id))  m_Id;

constexpr void __set_m_Id(int32_t value) ;

constexpr int32_t __get_m_Id() const;


// Properties

 int32_t __declspec(property(get=get_id, put=set_id))  id;


// Methods

/// @brief Method .ctor addr 0x2b75a44 size 0x20 virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method get_id addr 0x2b75a64 size 0x8 virtual false final false
 int32_t get_id() ;

/// @brief Method set_id addr 0x2b75a6c size 0x8 virtual false final false
 void set_id(int32_t value) ;

/// @brief Method Equals addr 0x2b75a74 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2b75aec size 0x10 virtual true final true
 bool Equals(::UnityEngine::Rendering::ShaderTagId other) ;

/// @brief Method GetHashCode addr 0x2b75afc size 0x20 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShaderTagId, "UnityEngine.Rendering", "ShaderTagId");

#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace {
namespace UnityEngine {
struct HumanLimit;
}
// Forward declare root types
namespace UnityEngine {
struct HumanBone;
}
// Type: UnityEngine::HumanBone
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15025))
// CS Name: UnityEngine.HumanBone
struct CORDL_TYPE HumanBone : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_BoneName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_HumanName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "limit", ty: "::UnityEngine::HumanLimit", modifiers: "", def_value: None }]
constexpr HumanBone(::StringW m_BoneName, ::StringW m_HumanName, ::UnityEngine::HumanLimit limit) noexcept;


                    constexpr HumanBone(HumanBone const&) = default;
                    constexpr HumanBone(HumanBone&&) = default;
                    constexpr HumanBone& operator=(HumanBone const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HumanBone& operator=(HumanBone&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HumanBone(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_m_BoneName, put=__set_m_BoneName))  m_BoneName;

constexpr void __set_m_BoneName(::StringW value) ;

constexpr ::StringW __get_m_BoneName() const;

 ::StringW __declspec(property(get=__get_m_HumanName, put=__set_m_HumanName))  m_HumanName;

constexpr void __set_m_HumanName(::StringW value) ;

constexpr ::StringW __get_m_HumanName() const;

 ::UnityEngine::HumanLimit __declspec(property(get=__get_limit, put=__set_limit))  limit;

constexpr void __set_limit(::UnityEngine::HumanLimit value) ;

constexpr ::UnityEngine::HumanLimit __get_limit() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HumanBone, "UnityEngine", "HumanBone");

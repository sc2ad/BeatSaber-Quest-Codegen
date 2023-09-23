#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct LocalKeywordSpace;
}
// Type: UnityEngine.Rendering::LocalKeywordSpace
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10309))
// CS Name: UnityEngine.Rendering.LocalKeywordSpace
struct CORDL_TYPE LocalKeywordSpace : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Rendering::LocalKeywordSpace>
constexpr operator  System::IEquatable_1<UnityEngine::Rendering::LocalKeywordSpace>() const;

// Ctor Parameters [CppParam { name: "m_KeywordSpace", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr LocalKeywordSpace(::cordl_internals::intptr_t m_KeywordSpace) noexcept;


                    constexpr LocalKeywordSpace(LocalKeywordSpace const&) = default;
                    constexpr LocalKeywordSpace(LocalKeywordSpace&&) = default;
                    constexpr LocalKeywordSpace& operator=(LocalKeywordSpace const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LocalKeywordSpace& operator=(LocalKeywordSpace&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LocalKeywordSpace(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_KeywordSpace, put=__set_m_KeywordSpace))  m_KeywordSpace;

constexpr void __set_m_KeywordSpace(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_KeywordSpace() const;


// Methods

/// @brief Method Equals addr 0x2b76fb4 size 0x7c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method Equals addr 0x2b77030 size 0xc virtual true final true
 bool Equals(UnityEngine::Rendering::LocalKeywordSpace rhs) ;

/// @brief Method op_Equality addr 0x2b76f34 size 0x8 virtual false final false
static bool op_Equality(UnityEngine::Rendering::LocalKeywordSpace lhs, UnityEngine::Rendering::LocalKeywordSpace rhs) ;

/// @brief Method GetHashCode addr 0x2b76f8c size 0x20 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::LocalKeywordSpace, "UnityEngine.Rendering", "LocalKeywordSpace");

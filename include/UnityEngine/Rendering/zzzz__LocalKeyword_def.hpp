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
namespace UnityEngine::Rendering {
struct LocalKeywordSpace;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
// Type: UnityEngine.Rendering::LocalKeyword
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10305))
// CS Name: UnityEngine.Rendering.LocalKeyword
struct CORDL_TYPE LocalKeyword : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>
constexpr operator  ::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>() const;

// Ctor Parameters [CppParam { name: "m_SpaceInfo", ty: "::UnityEngine::Rendering::LocalKeywordSpace", modifiers: "", def_value: None }, CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr LocalKeyword(::UnityEngine::Rendering::LocalKeywordSpace m_SpaceInfo, ::StringW m_Name, uint32_t m_Index) noexcept;


                    constexpr LocalKeyword(LocalKeyword const&) = default;
                    constexpr LocalKeyword(LocalKeyword&&) = default;
                    constexpr LocalKeyword& operator=(LocalKeyword const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LocalKeyword& operator=(LocalKeyword&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LocalKeyword(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Rendering::LocalKeywordSpace __declspec(property(get=__get_m_SpaceInfo, put=__set_m_SpaceInfo))  m_SpaceInfo;

constexpr void __set_m_SpaceInfo(::UnityEngine::Rendering::LocalKeywordSpace value) ;

constexpr ::UnityEngine::Rendering::LocalKeywordSpace __get_m_SpaceInfo() const;

 ::StringW __declspec(property(get=__get_m_Name, put=__set_m_Name))  m_Name;

constexpr void __set_m_Name(::StringW value) ;

constexpr ::StringW __get_m_Name() const;

 uint32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(uint32_t value) ;

constexpr uint32_t __get_m_Index() const;


// Methods

/// @brief Method ToString addr 0x2b76e58 size 0x8 virtual true final false
 ::StringW ToString() ;

/// @brief Method Equals addr 0x2b76e60 size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method Equals addr 0x2b76eec size 0x48 virtual true final true
 bool Equals(::UnityEngine::Rendering::LocalKeyword rhs) ;

/// @brief Method GetHashCode addr 0x2b76f3c size 0x50 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LocalKeyword, "UnityEngine.Rendering", "LocalKeyword");

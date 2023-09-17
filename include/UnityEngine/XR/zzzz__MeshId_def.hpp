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
namespace UnityEngine::XR {
struct MeshId;
}
// Type: UnityEngine.XR::MeshId
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15583))
// CS Name: UnityEngine.XR.MeshId
struct CORDL_TYPE MeshId : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::XR::MeshId>
constexpr operator  ::System::IEquatable_1<::UnityEngine::XR::MeshId>() const;

// Ctor Parameters [CppParam { name: "m_SubId1", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_SubId2", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr MeshId(uint64_t m_SubId1, uint64_t m_SubId2) noexcept;


                    constexpr MeshId(MeshId const&) = default;
                    constexpr MeshId(MeshId&&) = default;
                    constexpr MeshId& operator=(MeshId const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MeshId& operator=(MeshId&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MeshId(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::UnityEngine::XR::MeshId __declspec(property(get=__get_s_InvalidId, put=__set_s_InvalidId))  s_InvalidId;

static void __set_s_InvalidId(::UnityEngine::XR::MeshId value) ;

static ::UnityEngine::XR::MeshId __get_s_InvalidId() ;

 uint64_t __declspec(property(get=__get_m_SubId1, put=__set_m_SubId1))  m_SubId1;

constexpr void __set_m_SubId1(uint64_t value) ;

constexpr uint64_t __get_m_SubId1() const;

 uint64_t __declspec(property(get=__get_m_SubId2, put=__set_m_SubId2))  m_SubId2;

constexpr void __set_m_SubId2(uint64_t value) ;

constexpr uint64_t __get_m_SubId2() const;


// Methods

/// @brief Method ToString addr 0x2d3a1b4 size 0x94 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetHashCode addr 0x2d3a248 size 0x34 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2d3a27c size 0x88 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2d3a304 size 0x24 virtual true final true
 bool Equals(::UnityEngine::XR::MeshId other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::MeshId, "UnityEngine.XR", "MeshId");

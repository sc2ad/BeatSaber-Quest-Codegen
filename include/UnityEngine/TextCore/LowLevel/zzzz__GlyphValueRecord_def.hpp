#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphValueRecord;
}
// Type: UnityEngine.TextCore.LowLevel::GlyphValueRecord
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15516))
// CS Name: UnityEngine.TextCore.LowLevel.GlyphValueRecord
struct CORDL_TYPE GlyphValueRecord : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::TextCore::LowLevel::GlyphValueRecord>
constexpr operator  System::IEquatable_1<UnityEngine::TextCore::LowLevel::GlyphValueRecord>() const;

// Ctor Parameters [CppParam { name: "m_XPlacement", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_YPlacement", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_XAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_YAdvance", ty: "float_t", modifiers: "", def_value: None }]
constexpr GlyphValueRecord(float_t m_XPlacement, float_t m_YPlacement, float_t m_XAdvance, float_t m_YAdvance) noexcept;


                    constexpr GlyphValueRecord(GlyphValueRecord const&) = default;
                    constexpr GlyphValueRecord(GlyphValueRecord&&) = default;
                    constexpr GlyphValueRecord& operator=(GlyphValueRecord const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlyphValueRecord& operator=(GlyphValueRecord&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlyphValueRecord(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_m_XPlacement, put=__set_m_XPlacement))  m_XPlacement;

constexpr void __set_m_XPlacement(float_t value) ;

constexpr float_t __get_m_XPlacement() const;

 float_t __declspec(property(get=__get_m_YPlacement, put=__set_m_YPlacement))  m_YPlacement;

constexpr void __set_m_YPlacement(float_t value) ;

constexpr float_t __get_m_YPlacement() const;

 float_t __declspec(property(get=__get_m_XAdvance, put=__set_m_XAdvance))  m_XAdvance;

constexpr void __set_m_XAdvance(float_t value) ;

constexpr float_t __get_m_XAdvance() const;

 float_t __declspec(property(get=__get_m_YAdvance, put=__set_m_YAdvance))  m_YAdvance;

constexpr void __set_m_YAdvance(float_t value) ;

constexpr float_t __get_m_YAdvance() const;


// Properties

 float_t __declspec(property(get=get_xPlacement))  xPlacement;

 float_t __declspec(property(get=get_yPlacement))  yPlacement;

 float_t __declspec(property(get=get_xAdvance))  xAdvance;

 float_t __declspec(property(get=get_yAdvance))  yAdvance;


// Methods

/// @brief Method get_xPlacement addr 0x2bac708 size 0x8 virtual false final false
 float_t get_xPlacement() ;

/// @brief Method get_yPlacement addr 0x2bac710 size 0x8 virtual false final false
 float_t get_yPlacement() ;

/// @brief Method get_xAdvance addr 0x2bac718 size 0x8 virtual false final false
 float_t get_xAdvance() ;

/// @brief Method get_yAdvance addr 0x2bac720 size 0x8 virtual false final false
 float_t get_yAdvance() ;

/// @brief Method op_Addition addr 0x2bac728 size 0x14 virtual false final false
static UnityEngine::TextCore::LowLevel::GlyphValueRecord op_Addition(UnityEngine::TextCore::LowLevel::GlyphValueRecord a, UnityEngine::TextCore::LowLevel::GlyphValueRecord b) ;

/// @brief Method GetHashCode addr 0x2bac73c size 0x64 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2bac7a0 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2bac818 size 0xa8 virtual true final true
 bool Equals(UnityEngine::TextCore::LowLevel::GlyphValueRecord other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::LowLevel::GlyphValueRecord, "UnityEngine.TextCore.LowLevel", "GlyphValueRecord");

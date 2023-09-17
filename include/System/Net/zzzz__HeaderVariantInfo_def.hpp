#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace {
namespace System::Net {
struct CookieVariant;
}
// Forward declare root types
namespace System::Net {
struct HeaderVariantInfo;
}
// Type: System.Net::HeaderVariantInfo
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7980))
// CS Name: System.Net.HeaderVariantInfo
struct CORDL_TYPE HeaderVariantInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_variant", ty: "::System::Net::CookieVariant", modifiers: "", def_value: None }]
constexpr HeaderVariantInfo(::StringW m_name, ::System::Net::CookieVariant m_variant) noexcept;


                    constexpr HeaderVariantInfo(HeaderVariantInfo const&) = default;
                    constexpr HeaderVariantInfo(HeaderVariantInfo&&) = default;
                    constexpr HeaderVariantInfo& operator=(HeaderVariantInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HeaderVariantInfo& operator=(HeaderVariantInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HeaderVariantInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_m_name, put=__set_m_name))  m_name;

constexpr void __set_m_name(::StringW value) ;

constexpr ::StringW __get_m_name() const;

 ::System::Net::CookieVariant __declspec(property(get=__get_m_variant, put=__set_m_variant))  m_variant;

constexpr void __set_m_variant(::System::Net::CookieVariant value) ;

constexpr ::System::Net::CookieVariant __get_m_variant() const;


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 ::System::Net::CookieVariant __declspec(property(get=get_Variant))  Variant;


// Methods

/// @brief Method .ctor addr 0x281d758 size 0xc virtual false final false
 void _ctor(::StringW name, ::System::Net::CookieVariant variant) ;

/// @brief Method get_Name addr 0x281d764 size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method get_Variant addr 0x281d76c size 0x8 virtual false final false
 ::System::Net::CookieVariant get_Variant() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HeaderVariantInfo, "System.Net", "HeaderVariantInfo");

#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Globalization {
struct InternalEncodingDataItem;
}
// Type: System.Globalization::InternalEncodingDataItem
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3701))
// CS Name: System.Globalization.InternalEncodingDataItem
struct CORDL_TYPE InternalEncodingDataItem : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "webName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "codePage", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr InternalEncodingDataItem(::StringW webName, uint16_t codePage) noexcept;


                    constexpr InternalEncodingDataItem(InternalEncodingDataItem const&) = default;
                    constexpr InternalEncodingDataItem(InternalEncodingDataItem&&) = default;
                    constexpr InternalEncodingDataItem& operator=(InternalEncodingDataItem const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InternalEncodingDataItem& operator=(InternalEncodingDataItem&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InternalEncodingDataItem(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_webName, put=__set_webName))  webName;

constexpr void __set_webName(::StringW value) ;

constexpr ::StringW __get_webName() const;

 uint16_t __declspec(property(get=__get_codePage, put=__set_codePage))  codePage;

constexpr void __set_codePage(uint16_t value) ;

constexpr uint16_t __get_codePage() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::InternalEncodingDataItem, "System.Globalization", "InternalEncodingDataItem");

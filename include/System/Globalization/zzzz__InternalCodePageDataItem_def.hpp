#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Globalization {
struct InternalCodePageDataItem;
}
// Type: System.Globalization::InternalCodePageDataItem
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3702))
// CS Name: System.Globalization.InternalCodePageDataItem
struct CORDL_TYPE InternalCodePageDataItem : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "codePage", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "uiFamilyCodePage", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Names", ty: "::StringW", modifiers: "", def_value: None }]
constexpr InternalCodePageDataItem(uint16_t codePage, uint16_t uiFamilyCodePage, uint32_t flags, ::StringW Names) noexcept;


                    constexpr InternalCodePageDataItem(InternalCodePageDataItem const&) = default;
                    constexpr InternalCodePageDataItem(InternalCodePageDataItem&&) = default;
                    constexpr InternalCodePageDataItem& operator=(InternalCodePageDataItem const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InternalCodePageDataItem& operator=(InternalCodePageDataItem&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InternalCodePageDataItem(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint16_t __declspec(property(get=__get_codePage, put=__set_codePage))  codePage;

constexpr void __set_codePage(uint16_t value) ;

constexpr uint16_t __get_codePage() const;

 uint16_t __declspec(property(get=__get_uiFamilyCodePage, put=__set_uiFamilyCodePage))  uiFamilyCodePage;

constexpr void __set_uiFamilyCodePage(uint16_t value) ;

constexpr uint16_t __get_uiFamilyCodePage() const;

 uint32_t __declspec(property(get=__get_flags, put=__set_flags))  flags;

constexpr void __set_flags(uint32_t value) ;

constexpr uint32_t __get_flags() const;

 ::StringW __declspec(property(get=__get_Names, put=__set_Names))  Names;

constexpr void __set_Names(::StringW value) ;

constexpr ::StringW __get_Names() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::InternalCodePageDataItem, "System.Globalization", "InternalCodePageDataItem");

#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__CreditsData__TextStyle;
}
namespace GlobalNamespace {
class CreditsData;
}
namespace GlobalNamespace {
class ____GlobalNamespace__CreditsData__ChildCreditsItem;
}
namespace GlobalNamespace {
class ____GlobalNamespace__CreditsData__RootCreditsItem;
}
namespace GlobalNamespace {
class ____GlobalNamespace__CreditsData__Text;
}
// Type: ::TextStyle
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5575))
// CS Name: CreditsData::TextStyle
struct CORDL_TYPE ____GlobalNamespace__CreditsData__TextStyle : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__CreditsData__TextStyle(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__CreditsData__TextStyle(____GlobalNamespace__CreditsData__TextStyle const&) = default;
                    constexpr ____GlobalNamespace__CreditsData__TextStyle(____GlobalNamespace__CreditsData__TextStyle&&) = default;
                    constexpr ____GlobalNamespace__CreditsData__TextStyle& operator=(____GlobalNamespace__CreditsData__TextStyle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__CreditsData__TextStyle& operator=(____GlobalNamespace__CreditsData__TextStyle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__CreditsData__TextStyle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__CreditsData__TextStyle_Unwrapped : int32_t {
__Normal = 0,
__Title = 1,
__Header = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__CreditsData__TextStyle_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__CreditsData__TextStyle_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static ::GlobalNamespace::____GlobalNamespace__CreditsData__TextStyle const Normal;

/// @brief Field Title offset 0
static ::GlobalNamespace::____GlobalNamespace__CreditsData__TextStyle const Title;

/// @brief Field Header offset 0
static ::GlobalNamespace::____GlobalNamespace__CreditsData__TextStyle const Header;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Text
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5576))
// CS Name: CreditsData::Text
class CORDL_TYPE ____GlobalNamespace__CreditsData__Text : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__CreditsData__Text() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__CreditsData__Text", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__CreditsData__Text(____GlobalNamespace__CreditsData__Text const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__CreditsData__Text", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__CreditsData__Text(____GlobalNamespace__CreditsData__Text&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__CreditsData__Text(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__CreditsData__Text& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__CreditsData__Text& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__CreditsData__Text& operator=(____GlobalNamespace__CreditsData__Text&& o) noexcept = default;
  constexpr ____GlobalNamespace__CreditsData__Text& operator=(____GlobalNamespace__CreditsData__Text const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_text, put=__set_text))  text;

constexpr void __set_text(::StringW value) ;

constexpr ::StringW __get_text() const;

 bool __declspec(property(get=__get_localized, put=__set_localized))  localized;

constexpr void __set_localized(bool value) ;

constexpr bool __get_localized() const;

 ::GlobalNamespace::____GlobalNamespace__CreditsData__TextStyle __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(::GlobalNamespace::____GlobalNamespace__CreditsData__TextStyle value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__CreditsData__TextStyle __get_style() const;


// Methods

/// @brief Method IsEmpty addr 0x212f6ec size 0x20 virtual false final false
 bool IsEmpty() ;

/// @brief Method ToString addr 0x212f70c size 0xc4 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters []
explicit ____GlobalNamespace__CreditsData__Text() ;

/// @brief Method .ctor addr 0x212f7d0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RootCreditsItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5577))
// CS Name: CreditsData::RootCreditsItem
class CORDL_TYPE ____GlobalNamespace__CreditsData__RootCreditsItem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____GlobalNamespace__CreditsData__RootCreditsItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__CreditsData__RootCreditsItem", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__CreditsData__RootCreditsItem(____GlobalNamespace__CreditsData__RootCreditsItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__CreditsData__RootCreditsItem", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__CreditsData__RootCreditsItem(____GlobalNamespace__CreditsData__RootCreditsItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__CreditsData__RootCreditsItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__CreditsData__RootCreditsItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__CreditsData__RootCreditsItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__CreditsData__RootCreditsItem& operator=(____GlobalNamespace__CreditsData__RootCreditsItem&& o) noexcept = default;
  constexpr ____GlobalNamespace__CreditsData__RootCreditsItem& operator=(____GlobalNamespace__CreditsData__RootCreditsItem const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__CreditsData__Text __declspec(property(get=__get_title, put=__set_title))  title;

constexpr void __set_title(::GlobalNamespace::____GlobalNamespace__CreditsData__Text value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__CreditsData__Text __get_title() const;

 ::GlobalNamespace::____GlobalNamespace__CreditsData__Text __declspec(property(get=__get_text, put=__set_text))  text;

constexpr void __set_text(::GlobalNamespace::____GlobalNamespace__CreditsData__Text value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__CreditsData__Text __get_text() const;

 int32_t __declspec(property(get=__get_rowCountOverride, put=__set_rowCountOverride))  rowCountOverride;

constexpr void __set_rowCountOverride(int32_t value) ;

constexpr int32_t __get_rowCountOverride() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__CreditsData__ChildCreditsItem> __declspec(property(get=__get_creditsItems, put=__set_creditsItems))  creditsItems;

constexpr void __set_creditsItems(::ArrayW<::GlobalNamespace::____GlobalNamespace__CreditsData__ChildCreditsItem> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__CreditsData__ChildCreditsItem> __get_creditsItems() const;


// Methods

/// @brief Method HasTitle addr 0x212f7d8 size 0x10 virtual false final false
 bool HasTitle() ;

/// @brief Method HasText addr 0x212f7e8 size 0x10 virtual false final false
 bool HasText() ;

/// @brief Method HasRowItems addr 0x212f7f8 size 0x20 virtual false final false
 bool HasRowItems() ;

// Ctor Parameters []
explicit ____GlobalNamespace__CreditsData__RootCreditsItem() ;

/// @brief Method .ctor addr 0x212f818 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ChildCreditsItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5578))
// CS Name: CreditsData::ChildCreditsItem
class CORDL_TYPE ____GlobalNamespace__CreditsData__ChildCreditsItem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__CreditsData__ChildCreditsItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__CreditsData__ChildCreditsItem", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__CreditsData__ChildCreditsItem(____GlobalNamespace__CreditsData__ChildCreditsItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__CreditsData__ChildCreditsItem", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__CreditsData__ChildCreditsItem(____GlobalNamespace__CreditsData__ChildCreditsItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__CreditsData__ChildCreditsItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__CreditsData__ChildCreditsItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__CreditsData__ChildCreditsItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__CreditsData__ChildCreditsItem& operator=(____GlobalNamespace__CreditsData__ChildCreditsItem&& o) noexcept = default;
  constexpr ____GlobalNamespace__CreditsData__ChildCreditsItem& operator=(____GlobalNamespace__CreditsData__ChildCreditsItem const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__CreditsData__Text __declspec(property(get=__get_title, put=__set_title))  title;

constexpr void __set_title(::GlobalNamespace::____GlobalNamespace__CreditsData__Text value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__CreditsData__Text __get_title() const;

 ::GlobalNamespace::____GlobalNamespace__CreditsData__Text __declspec(property(get=__get_text, put=__set_text))  text;

constexpr void __set_text(::GlobalNamespace::____GlobalNamespace__CreditsData__Text value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__CreditsData__Text __get_text() const;


// Methods

/// @brief Method HasTitle addr 0x212f820 size 0x10 virtual false final false
 bool HasTitle() ;

/// @brief Method HasText addr 0x212f830 size 0x10 virtual false final false
 bool HasText() ;

// Ctor Parameters []
explicit ____GlobalNamespace__CreditsData__ChildCreditsItem() ;

/// @brief Method .ctor addr 0x212f840 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CreditsData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5579))
// CS Name: CreditsData
class CORDL_TYPE CreditsData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ChildCreditsItem = ::GlobalNamespace::____GlobalNamespace__CreditsData__ChildCreditsItem;

using RootCreditsItem = ::GlobalNamespace::____GlobalNamespace__CreditsData__RootCreditsItem;

using Text = ::GlobalNamespace::____GlobalNamespace__CreditsData__Text;

using TextStyle = ::GlobalNamespace::____GlobalNamespace__CreditsData__TextStyle;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CreditsData() = default;

// Ctor Parameters [CppParam { name: "", ty: "CreditsData", modifiers: " const&", def_value: None }]
constexpr CreditsData(CreditsData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CreditsData", modifiers: "&&", def_value: None }]
constexpr CreditsData(CreditsData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CreditsData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CreditsData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CreditsData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CreditsData& operator=(CreditsData&& o) noexcept = default;
  constexpr CreditsData& operator=(CreditsData const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__CreditsData__RootCreditsItem> __declspec(property(get=__get_creditsItems, put=__set_creditsItems))  creditsItems;

constexpr void __set_creditsItems(::ArrayW<::GlobalNamespace::____GlobalNamespace__CreditsData__RootCreditsItem> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__CreditsData__RootCreditsItem> __get_creditsItems() const;


// Methods

/// @brief Method Deserialize addr 0x212f5e0 size 0x104 virtual false final false
static ::GlobalNamespace::CreditsData Deserialize(::StringW text) ;

// Ctor Parameters []
explicit CreditsData() ;

/// @brief Method .ctor addr 0x212f6e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__CreditsData__TextStyle, "", "CreditsData/TextStyle");
NEED_NO_BOX(::GlobalNamespace::CreditsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreditsData, "", "CreditsData");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__CreditsData__ChildCreditsItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__CreditsData__ChildCreditsItem, "", "CreditsData/ChildCreditsItem");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__CreditsData__RootCreditsItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__CreditsData__RootCreditsItem, "", "CreditsData/RootCreditsItem");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__CreditsData__Text);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__CreditsData__Text, "", "CreditsData/Text");
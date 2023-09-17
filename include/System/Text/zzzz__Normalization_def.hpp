#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Text {
struct NormalizationForm;
}
namespace System::Text {
struct NormalizationCheck;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Text {
class Normalization;
}
// Type: System.Text::Normalization
namespace System::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2872))
// CS Name: System.Text.Normalization
class CORDL_TYPE Normalization : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Normalization() = default;

// Ctor Parameters [CppParam { name: "", ty: "Normalization", modifiers: " const&", def_value: None }]
constexpr Normalization(Normalization const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Normalization", modifiers: "&&", def_value: None }]
constexpr Normalization(Normalization&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Normalization(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Normalization& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Normalization& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Normalization& operator=(Normalization&& o) noexcept = default;
  constexpr Normalization& operator=(Normalization const& o) noexcept = default;
                


// Fields

static void* __declspec(property(get=__get_props, put=__set_props))  props;

static void __set_props(void* value) ;

static void* __get_props() ;

static void* __declspec(property(get=__get_mappedChars, put=__set_mappedChars))  mappedChars;

static void __set_mappedChars(void* value) ;

static void* __get_mappedChars() ;

static void* __declspec(property(get=__get_charMapIndex, put=__set_charMapIndex))  charMapIndex;

static void __set_charMapIndex(void* value) ;

static void* __get_charMapIndex() ;

static void* __declspec(property(get=__get_helperIndex, put=__set_helperIndex))  helperIndex;

static void __set_helperIndex(void* value) ;

static void* __get_helperIndex() ;

static void* __declspec(property(get=__get_mapIdxToComposite, put=__set_mapIdxToComposite))  mapIdxToComposite;

static void __set_mapIdxToComposite(void* value) ;

static void* __get_mapIdxToComposite() ;

static void* __declspec(property(get=__get_combiningClass, put=__set_combiningClass))  combiningClass;

static void __set_combiningClass(void* value) ;

static void* __get_combiningClass() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_forLock, put=__set_forLock))  forLock;

static void __set_forLock(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_forLock() ;

static bool __declspec(property(get=__get_isReady, put=__set_isReady))  isReady;

static void __set_isReady(bool value) ;

static bool __get_isReady() ;


// Methods

/// @brief Method PropValue addr 0x22e25fc size 0x94 virtual false final false
static uint32_t PropValue(int32_t cp) ;

/// @brief Method CharMapIdx addr 0x22e2690 size 0x94 virtual false final false
static int32_t CharMapIdx(int32_t cp) ;

/// @brief Method GetCombiningClass addr 0x22e2724 size 0xa8 virtual false final false
static uint8_t GetCombiningClass(int32_t c) ;

/// @brief Method GetPrimaryCompositeFromMapIndex addr 0x22e27cc size 0xa8 virtual false final false
static int32_t GetPrimaryCompositeFromMapIndex(int32_t src) ;

/// @brief Method GetPrimaryCompositeHelperIndex addr 0x22e2874 size 0xa8 virtual false final false
static int32_t GetPrimaryCompositeHelperIndex(int32_t cp) ;

/// @brief Method Compose addr 0x22e291c size 0xe0 virtual false final false
static ::StringW Compose(::StringW source, int32_t checkType) ;

/// @brief Method Combine addr 0x22e2b2c size 0x13c virtual false final false
static ::System::Text::StringBuilder Combine(::StringW source, int32_t start, int32_t checkType) ;

/// @brief Method Combine addr 0x22e2c68 size 0x110 virtual false final false
static void Combine(::System::Text::StringBuilder sb, int32_t i, int32_t checkType) ;

/// @brief Method CombineHangul addr 0x22e2e94 size 0x1c4 virtual false final false
static int32_t CombineHangul(::System::Text::StringBuilder sb, ::StringW s, int32_t current) ;

/// @brief Method Fetch addr 0x22e328c size 0x3c virtual false final false
static int32_t Fetch(::System::Text::StringBuilder sb, ::StringW s, int32_t i) ;

/// @brief Method TryComposeWithPreviousStarter addr 0x22e3058 size 0x234 virtual false final false
static int32_t TryComposeWithPreviousStarter(::System::Text::StringBuilder sb, ::StringW s, int32_t current) ;

/// @brief Method TryCompose addr 0x22e32c8 size 0x118 virtual false final false
static int32_t TryCompose(int32_t i, int32_t starter, int32_t candidate) ;

/// @brief Method Decompose addr 0x22e33e0 size 0x8c virtual false final false
static ::StringW Decompose(::StringW source, int32_t checkType) ;

/// @brief Method Decompose addr 0x22e29fc size 0x130 virtual false final false
static void Decompose(::StringW source, ByRef<::System::Text::StringBuilder> sb, int32_t checkType) ;

/// @brief Method ReorderCanonical addr 0x22e3644 size 0x270 virtual false final false
static void ReorderCanonical(::StringW src, ByRef<::System::Text::StringBuilder> sb, int32_t start) ;

/// @brief Method DecomposeChar addr 0x22e346c size 0x1d8 virtual false final false
static void DecomposeChar(ByRef<::System::Text::StringBuilder> sb, ByRef<::ArrayW<int32_t>> buf, ::StringW s, int32_t i, int32_t checkType, ByRef<int32_t> start) ;

/// @brief Method QuickCheck addr 0x22e2d78 size 0x11c virtual false final false
static ::System::Text::NormalizationCheck QuickCheck(char16_t c, int32_t type) ;

/// @brief Method GetCanonicalHangul addr 0x22e3a6c size 0xec virtual false final false
static int32_t GetCanonicalHangul(int32_t s, ::ArrayW<int32_t> buf, int32_t bufIdx) ;

/// @brief Method GetCanonical addr 0x22e38b4 size 0x1b8 virtual false final false
static int32_t GetCanonical(int32_t c, ::ArrayW<int32_t> buf, int32_t bufIdx, int32_t checkType) ;

/// @brief Method Normalize addr 0x22e3b58 size 0xbc virtual false final false
static ::StringW Normalize(::StringW source, ::System::Text::NormalizationForm normalizationForm) ;

/// @brief Method Normalize addr 0x22e3c14 size 0x98 virtual false final false
static ::StringW Normalize(::StringW source, int32_t type) ;

/// @brief Method load_normalization_resource addr 0x22e3cac size 0x4 virtual false final false
static void load_normalization_resource(ByRef<::cordl_internals::intptr_t> props, ByRef<::cordl_internals::intptr_t> mappedChars, ByRef<::cordl_internals::intptr_t> charMapIndex, ByRef<::cordl_internals::intptr_t> helperIndex, ByRef<::cordl_internals::intptr_t> mapIdxToComposite, ByRef<::cordl_internals::intptr_t> combiningClass) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
} // end anonymous namespace
NEED_NO_BOX(::System::Text::Normalization);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::Normalization, "System.Text", "Normalization");

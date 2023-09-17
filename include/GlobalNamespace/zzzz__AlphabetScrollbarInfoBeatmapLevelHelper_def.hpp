#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class ____GlobalNamespace__AlphabetScrollInfo__Data;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class AlphabetScrollbarInfoBeatmapLevelHelper;
}
namespace GlobalNamespace {
class ____GlobalNamespace__AlphabetScrollbarInfoBeatmapLevelHelper____c;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4428))
// CS Name: AlphabetScrollbarInfoBeatmapLevelHelper::<>c
class CORDL_TYPE ____GlobalNamespace__AlphabetScrollbarInfoBeatmapLevelHelper____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__AlphabetScrollbarInfoBeatmapLevelHelper____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__AlphabetScrollbarInfoBeatmapLevelHelper____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__AlphabetScrollbarInfoBeatmapLevelHelper____c(____GlobalNamespace__AlphabetScrollbarInfoBeatmapLevelHelper____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__AlphabetScrollbarInfoBeatmapLevelHelper____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__AlphabetScrollbarInfoBeatmapLevelHelper____c(____GlobalNamespace__AlphabetScrollbarInfoBeatmapLevelHelper____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__AlphabetScrollbarInfoBeatmapLevelHelper____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__AlphabetScrollbarInfoBeatmapLevelHelper____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__AlphabetScrollbarInfoBeatmapLevelHelper____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__AlphabetScrollbarInfoBeatmapLevelHelper____c& operator=(____GlobalNamespace__AlphabetScrollbarInfoBeatmapLevelHelper____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__AlphabetScrollbarInfoBeatmapLevelHelper____c& operator=(____GlobalNamespace__AlphabetScrollbarInfoBeatmapLevelHelper____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__AlphabetScrollbarInfoBeatmapLevelHelper____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__AlphabetScrollbarInfoBeatmapLevelHelper____c value) ;

static ::GlobalNamespace::____GlobalNamespace__AlphabetScrollbarInfoBeatmapLevelHelper____c __get___9() ;

static ::System::Func_2<::GlobalNamespace::IPreviewBeatmapLevel,::StringW> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(::System::Func_2<::GlobalNamespace::IPreviewBeatmapLevel,::StringW> value) ;

static ::System::Func_2<::GlobalNamespace::IPreviewBeatmapLevel,::StringW> __get___9__3_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__AlphabetScrollbarInfoBeatmapLevelHelper____c() ;

/// @brief Method .ctor addr 0x21ed92c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CreateData>b__3_0 addr 0x21ed934 size 0xac virtual false final false
 ::StringW _CreateData_b__3_0(::GlobalNamespace::IPreviewBeatmapLevel x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AlphabetScrollbarInfoBeatmapLevelHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4429))
// CS Name: AlphabetScrollbarInfoBeatmapLevelHelper
class CORDL_TYPE AlphabetScrollbarInfoBeatmapLevelHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__AlphabetScrollbarInfoBeatmapLevelHelper____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AlphabetScrollbarInfoBeatmapLevelHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollbarInfoBeatmapLevelHelper", modifiers: " const&", def_value: None }]
constexpr AlphabetScrollbarInfoBeatmapLevelHelper(AlphabetScrollbarInfoBeatmapLevelHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollbarInfoBeatmapLevelHelper", modifiers: "&&", def_value: None }]
constexpr AlphabetScrollbarInfoBeatmapLevelHelper(AlphabetScrollbarInfoBeatmapLevelHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AlphabetScrollbarInfoBeatmapLevelHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AlphabetScrollbarInfoBeatmapLevelHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AlphabetScrollbarInfoBeatmapLevelHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AlphabetScrollbarInfoBeatmapLevelHelper& operator=(AlphabetScrollbarInfoBeatmapLevelHelper&& o) noexcept = default;
  constexpr AlphabetScrollbarInfoBeatmapLevelHelper& operator=(AlphabetScrollbarInfoBeatmapLevelHelper const& o) noexcept = default;
                


// Fields

/// @brief Field kFirstAlphabet offset 0
static constexpr ::ConstString  kFirstAlphabet{u"A"};

/// @brief Field kNonAlphabetChar offset 0
static constexpr char16_t  kNonAlphabetChar{#};

/// @brief Field kMaxCharactersCount offset 0
static constexpr int32_t  kMaxCharactersCount{28};


// Methods

/// @brief Method CreateData addr 0x21ed244 size 0x684 virtual false final false
static ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::____GlobalNamespace__AlphabetScrollInfo__Data> CreateData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel> previewBeatmapLevels, ByRef<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel>> sortedPreviewBeatmapLevels) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper, "", "AlphabetScrollbarInfoBeatmapLevelHelper");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__AlphabetScrollbarInfoBeatmapLevelHelper____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__AlphabetScrollbarInfoBeatmapLevelHelper____c, "", "AlphabetScrollbarInfoBeatmapLevelHelper/<>c");
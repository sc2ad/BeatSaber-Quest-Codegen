#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
class AlwaysOwnedContentSO;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class AlwaysOwnedContentContainerSO;
}
// Type: ::AlwaysOwnedContentContainerSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4126))
// CS Name: AlwaysOwnedContentContainerSO
class CORDL_TYPE AlwaysOwnedContentContainerSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AlwaysOwnedContentContainerSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "AlwaysOwnedContentContainerSO", modifiers: " const&", def_value: None }]
constexpr AlwaysOwnedContentContainerSO(AlwaysOwnedContentContainerSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AlwaysOwnedContentContainerSO", modifiers: "&&", def_value: None }]
constexpr AlwaysOwnedContentContainerSO(AlwaysOwnedContentContainerSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AlwaysOwnedContentContainerSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr AlwaysOwnedContentContainerSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AlwaysOwnedContentContainerSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AlwaysOwnedContentContainerSO& operator=(AlwaysOwnedContentContainerSO&& o) noexcept = default;
  constexpr AlwaysOwnedContentContainerSO& operator=(AlwaysOwnedContentContainerSO const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::AlwaysOwnedContentSO __declspec(property(get=__get__alwaysOwnedContent, put=__set__alwaysOwnedContent))  _alwaysOwnedContent;

constexpr void __set__alwaysOwnedContent(::GlobalNamespace::AlwaysOwnedContentSO value) ;

constexpr ::GlobalNamespace::AlwaysOwnedContentSO __get__alwaysOwnedContent() const;

 ::System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get__alwaysOwnedBeatmapLevelIds, put=__set__alwaysOwnedBeatmapLevelIds))  _alwaysOwnedBeatmapLevelIds;

constexpr void __set__alwaysOwnedBeatmapLevelIds(::System::Collections::Generic::HashSet_1<::StringW> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW> __get__alwaysOwnedBeatmapLevelIds() const;

 ::System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get__alwaysOwnedPacksIds, put=__set__alwaysOwnedPacksIds))  _alwaysOwnedPacksIds;

constexpr void __set__alwaysOwnedPacksIds(::System::Collections::Generic::HashSet_1<::StringW> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW> __get__alwaysOwnedPacksIds() const;


// Properties

 ::System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=get_alwaysOwnedBeatmapLevelIds))  alwaysOwnedBeatmapLevelIds;

 ::System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=get_alwaysOwnedPacksIds))  alwaysOwnedPacksIds;


// Methods

/// @brief Method get_alwaysOwnedBeatmapLevelIds addr 0x20c7928 size 0x24 virtual false final false
 ::System::Collections::Generic::HashSet_1<::StringW> get_alwaysOwnedBeatmapLevelIds() ;

/// @brief Method get_alwaysOwnedPacksIds addr 0x20c7bfc size 0x24 virtual false final false
 ::System::Collections::Generic::HashSet_1<::StringW> get_alwaysOwnedPacksIds() ;

/// @brief Method OnEnable addr 0x20c81c0 size 0x1c virtual true final false
 void OnEnable() ;

/// @brief Method InitAlwaysOwnedItems addr 0x20c7c78 size 0x548 virtual false final false
 void InitAlwaysOwnedItems() ;

// Ctor Parameters []
explicit AlwaysOwnedContentContainerSO() ;

/// @brief Method .ctor addr 0x20c81dc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AlwaysOwnedContentContainerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlwaysOwnedContentContainerSO, "", "AlwaysOwnedContentContainerSO");

#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
class FileBrowserItem;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
struct ____System__Environment__SpecialFolder;
}
// Forward declare root types
namespace GlobalNamespace {
class BookmarksFoldersModel;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BookmarksFoldersModel____c;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4169))
// CS Name: BookmarksFoldersModel::<>c
class CORDL_TYPE ____GlobalNamespace__BookmarksFoldersModel____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__BookmarksFoldersModel____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BookmarksFoldersModel____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BookmarksFoldersModel____c(____GlobalNamespace__BookmarksFoldersModel____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BookmarksFoldersModel____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BookmarksFoldersModel____c(____GlobalNamespace__BookmarksFoldersModel____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BookmarksFoldersModel____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BookmarksFoldersModel____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BookmarksFoldersModel____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BookmarksFoldersModel____c& operator=(____GlobalNamespace__BookmarksFoldersModel____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__BookmarksFoldersModel____c& operator=(____GlobalNamespace__BookmarksFoldersModel____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__BookmarksFoldersModel____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__BookmarksFoldersModel____c value) ;

static ::GlobalNamespace::____GlobalNamespace__BookmarksFoldersModel____c __get___9() ;

static ::System::Func_2<::System::____System__Environment__SpecialFolder,::StringW> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(::System::Func_2<::System::____System__Environment__SpecialFolder,::StringW> value) ;

static ::System::Func_2<::System::____System__Environment__SpecialFolder,::StringW> __get___9__3_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__BookmarksFoldersModel____c() ;

/// @brief Method .ctor addr 0x21bbbe0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <get_bookmarksFolders>b__3_0 addr 0x21bbbe8 size 0xc virtual false final false
 ::StringW _get_bookmarksFolders_b__3_0(::System::____System__Environment__SpecialFolder specialFolder) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BookmarksFoldersModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4170))
// CS Name: BookmarksFoldersModel
class CORDL_TYPE BookmarksFoldersModel : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__BookmarksFoldersModel____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BookmarksFoldersModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "BookmarksFoldersModel", modifiers: " const&", def_value: None }]
constexpr BookmarksFoldersModel(BookmarksFoldersModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BookmarksFoldersModel", modifiers: "&&", def_value: None }]
constexpr BookmarksFoldersModel(BookmarksFoldersModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BookmarksFoldersModel(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr BookmarksFoldersModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BookmarksFoldersModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BookmarksFoldersModel& operator=(BookmarksFoldersModel&& o) noexcept = default;
  constexpr BookmarksFoldersModel& operator=(BookmarksFoldersModel const& o) noexcept = default;
                


// Fields

 ::ArrayW<::StringW> __declspec(property(get=__get_myFolders, put=__set_myFolders))  myFolders;

constexpr void __set_myFolders(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_myFolders() const;

 ::ArrayW<::GlobalNamespace::FileBrowserItem> __declspec(property(get=__get__bookmarksFolders, put=__set__bookmarksFolders))  _bookmarksFolders;

constexpr void __set__bookmarksFolders(::ArrayW<::GlobalNamespace::FileBrowserItem> value) ;

constexpr ::ArrayW<::GlobalNamespace::FileBrowserItem> __get__bookmarksFolders() const;


// Properties

 ::ArrayW<::GlobalNamespace::FileBrowserItem> __declspec(property(get=get_bookmarksFolders))  bookmarksFolders;


// Methods

/// @brief Method get_bookmarksFolders addr 0x21bb5a0 size 0x594 virtual false final false
 ::ArrayW<::GlobalNamespace::FileBrowserItem> get_bookmarksFolders() ;

// Ctor Parameters []
explicit BookmarksFoldersModel() ;

/// @brief Method .ctor addr 0x21bbb74 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BookmarksFoldersModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BookmarksFoldersModel, "", "BookmarksFoldersModel");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BookmarksFoldersModel____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BookmarksFoldersModel____c, "", "BookmarksFoldersModel/<>c");

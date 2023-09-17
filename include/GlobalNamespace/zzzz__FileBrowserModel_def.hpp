#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class FileBrowserItem;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class FileBrowserModel;
}
namespace GlobalNamespace {
class GlobalNamespace__FileBrowserModel____c__DisplayClass0_0;
}
namespace {
// Type: ::<>c__DisplayClass0_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4222))
// CS Name: FileBrowserModel::<>c__DisplayClass0_0
class CORDL_TYPE GlobalNamespace__FileBrowserModel____c__DisplayClass0_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__FileBrowserModel____c__DisplayClass0_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FileBrowserModel____c__DisplayClass0_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__FileBrowserModel____c__DisplayClass0_0(GlobalNamespace__FileBrowserModel____c__DisplayClass0_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FileBrowserModel____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__FileBrowserModel____c__DisplayClass0_0(GlobalNamespace__FileBrowserModel____c__DisplayClass0_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__FileBrowserModel____c__DisplayClass0_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__FileBrowserModel____c__DisplayClass0_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__FileBrowserModel____c__DisplayClass0_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__FileBrowserModel____c__DisplayClass0_0& operator=(GlobalNamespace__FileBrowserModel____c__DisplayClass0_0&& o) noexcept = default;
  constexpr GlobalNamespace__FileBrowserModel____c__DisplayClass0_0& operator=(GlobalNamespace__FileBrowserModel____c__DisplayClass0_0 const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::FileBrowserItem> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(::ArrayW<GlobalNamespace::FileBrowserItem> value) ;

constexpr ::ArrayW<GlobalNamespace::FileBrowserItem> __get_items() const;

 ::StringW __declspec(property(get=__get_direcotryPath, put=__set_direcotryPath))  direcotryPath;

constexpr void __set_direcotryPath(::StringW value) ;

constexpr ::StringW __get_direcotryPath() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_extensions, put=__set_extensions))  extensions;

constexpr void __set_extensions(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_extensions() const;

 System::Action_1<::ArrayW<GlobalNamespace::FileBrowserItem>> __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action_1<::ArrayW<GlobalNamespace::FileBrowserItem>> value) ;

constexpr System::Action_1<::ArrayW<GlobalNamespace::FileBrowserItem>> __get_callback() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__FileBrowserModel____c__DisplayClass0_0() ;

/// @brief Method .ctor addr 0x21d2518 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetContentOfDirectory>b__0 addr 0x21d2a54 size 0x20 virtual false final false
 void _GetContentOfDirectory_b__0() ;

/// @brief Method <GetContentOfDirectory>b__1 addr 0x21d2a74 size 0x28 virtual false final false
 void _GetContentOfDirectory_b__1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FileBrowserModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4223))
// CS Name: FileBrowserModel
class CORDL_TYPE FileBrowserModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass0_0 = GlobalNamespace::GlobalNamespace__FileBrowserModel____c__DisplayClass0_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FileBrowserModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileBrowserModel", modifiers: " const&", def_value: None }]
constexpr FileBrowserModel(FileBrowserModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileBrowserModel", modifiers: "&&", def_value: None }]
constexpr FileBrowserModel(FileBrowserModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileBrowserModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FileBrowserModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileBrowserModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileBrowserModel& operator=(FileBrowserModel&& o) noexcept = default;
  constexpr FileBrowserModel& operator=(FileBrowserModel const& o) noexcept = default;
                


// Methods

/// @brief Method GetContentOfDirectory addr 0x21d23ec size 0x12c virtual false final false
static void GetContentOfDirectory(::StringW direcotryPath, ::ArrayW<::StringW> extensions, System::Action_1<::ArrayW<GlobalNamespace::FileBrowserItem>> callback) ;

/// @brief Method GetContentOfDirectory addr 0x21d2520 size 0x4a8 virtual false final false
static ::ArrayW<GlobalNamespace::FileBrowserItem> GetContentOfDirectory(::StringW directoryPath, ::ArrayW<::StringW> extensions) ;

/// @brief Method CanOpenDirectory addr 0x21d29c8 size 0x8c virtual false final false
static bool CanOpenDirectory(::StringW path) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FileBrowserModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileBrowserModel, "", "FileBrowserModel");
NEED_NO_BOX(::GlobalNamespace::GlobalNamespace__FileBrowserModel____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalNamespace__FileBrowserModel____c__DisplayClass0_0, "", "FileBrowserModel/<>c__DisplayClass0_0");
} // end anonymous namespace

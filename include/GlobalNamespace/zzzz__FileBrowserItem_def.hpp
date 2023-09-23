#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace GlobalNamespace {
class FileBrowserItem;
}
// Type: ::FileBrowserItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4219))
// CS Name: FileBrowserItem
class CORDL_TYPE FileBrowserItem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~FileBrowserItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileBrowserItem", modifiers: " const&", def_value: None }]
constexpr FileBrowserItem(FileBrowserItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileBrowserItem", modifiers: "&&", def_value: None }]
constexpr FileBrowserItem(FileBrowserItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileBrowserItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FileBrowserItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileBrowserItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileBrowserItem& operator=(FileBrowserItem&& o) noexcept = default;
  constexpr FileBrowserItem& operator=(FileBrowserItem const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__displayName_k__BackingField, put=__set__displayName_k__BackingField))  _displayName_k__BackingField;

constexpr void __set__displayName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__displayName_k__BackingField() const;

 ::StringW __declspec(property(get=__get__fullPath_k__BackingField, put=__set__fullPath_k__BackingField))  _fullPath_k__BackingField;

constexpr void __set__fullPath_k__BackingField(::StringW value) ;

constexpr ::StringW __get__fullPath_k__BackingField() const;

 bool __declspec(property(get=__get__isDirectory_k__BackingField, put=__set__isDirectory_k__BackingField))  _isDirectory_k__BackingField;

constexpr void __set__isDirectory_k__BackingField(bool value) ;

constexpr bool __get__isDirectory_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_displayName, put=set_displayName))  displayName;

 ::StringW __declspec(property(get=get_fullPath, put=set_fullPath))  fullPath;

 bool __declspec(property(get=get_isDirectory, put=set_isDirectory))  isDirectory;


// Methods

/// @brief Method get_displayName addr 0x21bfe00 size 0x8 virtual false final false
 ::StringW get_displayName() ;

/// @brief Method set_displayName addr 0x21bfe08 size 0x8 virtual false final false
 void set_displayName(::StringW value) ;

/// @brief Method get_fullPath addr 0x21bfe10 size 0x8 virtual false final false
 ::StringW get_fullPath() ;

/// @brief Method set_fullPath addr 0x21bfe18 size 0x8 virtual false final false
 void set_fullPath(::StringW value) ;

/// @brief Method get_isDirectory addr 0x21bfe20 size 0x8 virtual false final false
 bool get_isDirectory() ;

/// @brief Method set_isDirectory addr 0x21bfe28 size 0xc virtual false final false
 void set_isDirectory(bool value) ;

// Ctor Parameters [CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fullPath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isDirectory", ty: "bool", modifiers: "", def_value: None }]
explicit FileBrowserItem(::StringW displayName, ::StringW fullPath, bool isDirectory) ;

/// @brief Method .ctor addr 0x21bbb34 size 0x40 virtual false final false
 void _ctor(::StringW displayName, ::StringW fullPath, bool isDirectory) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FileBrowserItem);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FileBrowserItem, "", "FileBrowserItem");

#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Text::RegularExpressions {
class RegexNode;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexTree;
}
// Type: System.Text.RegularExpressions::RegexTree
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7782))
// CS Name: System.Text.RegularExpressions.RegexTree
class CORDL_TYPE RegexTree : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~RegexTree() = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexTree", modifiers: " const&", def_value: None }]
constexpr RegexTree(RegexTree const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexTree", modifiers: "&&", def_value: None }]
constexpr RegexTree(RegexTree&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RegexTree(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RegexTree& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RegexTree& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RegexTree& operator=(RegexTree&& o) noexcept = default;
  constexpr RegexTree& operator=(RegexTree const& o) noexcept = default;
                


// Fields

 System::Text::RegularExpressions::RegexNode __declspec(property(get=__get_Root, put=__set_Root))  Root;

constexpr void __set_Root(System::Text::RegularExpressions::RegexNode value) ;

constexpr System::Text::RegularExpressions::RegexNode __get_Root() const;

 System::Collections::Hashtable __declspec(property(get=__get_Caps, put=__set_Caps))  Caps;

constexpr void __set_Caps(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_Caps() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_CapNumList, put=__set_CapNumList))  CapNumList;

constexpr void __set_CapNumList(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_CapNumList() const;

 int32_t __declspec(property(get=__get_CapTop, put=__set_CapTop))  CapTop;

constexpr void __set_CapTop(int32_t value) ;

constexpr int32_t __get_CapTop() const;

 System::Collections::Hashtable __declspec(property(get=__get_CapNames, put=__set_CapNames))  CapNames;

constexpr void __set_CapNames(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_CapNames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_CapsList, put=__set_CapsList))  CapsList;

constexpr void __set_CapsList(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_CapsList() const;

 System::Text::RegularExpressions::RegexOptions __declspec(property(get=__get_Options, put=__set_Options))  Options;

constexpr void __set_Options(System::Text::RegularExpressions::RegexOptions value) ;

constexpr System::Text::RegularExpressions::RegexOptions __get_Options() const;


// Methods

// Ctor Parameters [CppParam { name: "root", ty: "System::Text::RegularExpressions::RegexNode", modifiers: "", def_value: None }, CppParam { name: "caps", ty: "System::Collections::Hashtable", modifiers: "", def_value: None }, CppParam { name: "capNumList", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "capTop", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "capNames", ty: "System::Collections::Hashtable", modifiers: "", def_value: None }, CppParam { name: "capsList", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "options", ty: "System::Text::RegularExpressions::RegexOptions", modifiers: "", def_value: None }]
explicit RegexTree(System::Text::RegularExpressions::RegexNode root, System::Collections::Hashtable caps, ::ArrayW<int32_t> capNumList, int32_t capTop, System::Collections::Hashtable capNames, ::ArrayW<::StringW> capsList, System::Text::RegularExpressions::RegexOptions options) ;

/// @brief Method .ctor addr 0x27d1380 size 0x68 virtual false final false
 void _ctor(System::Text::RegularExpressions::RegexNode root, System::Collections::Hashtable caps, ::ArrayW<int32_t> capNumList, int32_t capTop, System::Collections::Hashtable capNames, ::ArrayW<::StringW> capsList, System::Text::RegularExpressions::RegexOptions options) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
NEED_NO_BOX(System::Text::RegularExpressions::RegexTree);
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexTree, "System.Text.RegularExpressions", "RegexTree");

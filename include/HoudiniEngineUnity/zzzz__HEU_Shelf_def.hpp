#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_ShelfToolData;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_Shelf;
}
// Type: HoudiniEngineUnity::HEU_Shelf
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9799))
// CS Name: HoudiniEngineUnity.HEU_Shelf
class CORDL_TYPE HEU_Shelf : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HEU_Shelf() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Shelf", modifiers: " const&", def_value: None }]
constexpr HEU_Shelf(HEU_Shelf const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Shelf", modifiers: "&&", def_value: None }]
constexpr HEU_Shelf(HEU_Shelf&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_Shelf(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_Shelf& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_Shelf& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_Shelf& operator=(HEU_Shelf&& o) noexcept = default;
  constexpr HEU_Shelf& operator=(HEU_Shelf const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__shelfName, put=__set__shelfName))  _shelfName;

constexpr void __set__shelfName(::StringW value) ;

constexpr ::StringW __get__shelfName() const;

 ::StringW __declspec(property(get=__get__shelfPath, put=__set__shelfPath))  _shelfPath;

constexpr void __set__shelfPath(::StringW value) ;

constexpr ::StringW __get__shelfPath() const;

 bool __declspec(property(get=__get__defaultShelf, put=__set__defaultShelf))  _defaultShelf;

constexpr void __set__defaultShelf(bool value) ;

constexpr bool __get__defaultShelf() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ShelfToolData> __declspec(property(get=__get__tools, put=__set__tools))  _tools;

constexpr void __set__tools(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ShelfToolData> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ShelfToolData> __get__tools() const;


// Methods

static HoudiniEngineUnity::HEU_Shelf New_ctor() ;

/// @brief Method .ctor addr 0x205ee74 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_Shelf);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_Shelf, "HoudiniEngineUnity", "HEU_Shelf");

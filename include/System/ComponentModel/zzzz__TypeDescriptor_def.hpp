#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class Attribute;
}
namespace System::Collections {
class ICollection;
}
namespace System::ComponentModel::Design {
class ITypeDescriptorFilterService;
}
namespace System::Collections {
class IComparer;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System {
class Type;
}
namespace System::ComponentModel {
class EventDescriptorCollection;
}
namespace System::ComponentModel {
class ICustomTypeDescriptor;
}
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace System::ComponentModel {
class TypeDescriptionProvider;
}
namespace System::Collections {
class IDictionary;
}
namespace System::ComponentModel {
class IExtenderProvider;
}
namespace System::ComponentModel {
class WeakHashtable;
}
namespace System::ComponentModel {
class RefreshEventHandler;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IList;
}
namespace System::Diagnostics {
class BooleanSwitch;
}
namespace System::Collections {
class Hashtable;
}
namespace System::ComponentModel {
class MemberDescriptor;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace System::ComponentModel {
class System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem;
}
namespace System::ComponentModel {
class System__ComponentModel__TypeDescriptor__FilterCacheItem;
}
namespace System::ComponentModel {
class System__ComponentModel__TypeDescriptor__IUnimplemented;
}
namespace System::ComponentModel {
class System__ComponentModel__TypeDescriptor__MemberDescriptorComparer;
}
namespace System::ComponentModel {
class System__ComponentModel__TypeDescriptor__MergedTypeDescriptor;
}
namespace System::ComponentModel {
class System__ComponentModel__TypeDescriptor__TypeDescriptionNode;
}
namespace System::ComponentModel {
class System__ComponentModel__TypeDescriptor__TypeDescriptorComObject;
}
namespace System::ComponentModel {
class System__ComponentModel__TypeDescriptor__TypeDescriptorInterface;
}
namespace System::ComponentModel {
class TypeDescriptor;
}
namespace GlobalNamespace {
struct System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor;
}
namespace GlobalNamespace {
struct System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor;
}
// Type: ::AttributeFilterCacheItem
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8332))
// CS Name: System.ComponentModel.TypeDescriptor::AttributeFilterCacheItem
class CORDL_TYPE System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem", modifiers: " const&", def_value: None }]
constexpr System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem(System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem", modifiers: "&&", def_value: None }]
constexpr System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem(System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem& operator=(System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem&& o) noexcept = default;
  constexpr System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem& operator=(System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem const& o) noexcept = default;
                


// Fields

 ::ArrayW<System::Attribute> __declspec(property(get=__get__filter, put=__set__filter))  _filter;

constexpr void __set__filter(::ArrayW<System::Attribute> value) ;

constexpr ::ArrayW<System::Attribute> __get__filter() const;

 System::Collections::ICollection __declspec(property(get=__get_FilteredMembers, put=__set_FilteredMembers))  FilteredMembers;

constexpr void __set_FilteredMembers(System::Collections::ICollection value) ;

constexpr System::Collections::ICollection __get_FilteredMembers() const;


// Methods

// Ctor Parameters [CppParam { name: "filter", ty: "::ArrayW<System::Attribute>", modifiers: "", def_value: None }, CppParam { name: "filteredMembers", ty: "System::Collections::ICollection", modifiers: "", def_value: None }]
explicit System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem(::ArrayW<System::Attribute> filter, System::Collections::ICollection filteredMembers) ;

/// @brief Method .ctor addr 0x27a0e24 size 0x2c virtual false final false
 void _ctor(::ArrayW<System::Attribute> filter, System::Collections::ICollection filteredMembers) ;

/// @brief Method IsValid addr 0x27a0dac size 0x78 virtual false final false
 bool IsValid(::ArrayW<System::Attribute> filter) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Type: ::FilterCacheItem
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8333))
// CS Name: System.ComponentModel.TypeDescriptor::FilterCacheItem
class CORDL_TYPE System__ComponentModel__TypeDescriptor__FilterCacheItem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__ComponentModel__TypeDescriptor__FilterCacheItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeDescriptor__FilterCacheItem", modifiers: " const&", def_value: None }]
constexpr System__ComponentModel__TypeDescriptor__FilterCacheItem(System__ComponentModel__TypeDescriptor__FilterCacheItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeDescriptor__FilterCacheItem", modifiers: "&&", def_value: None }]
constexpr System__ComponentModel__TypeDescriptor__FilterCacheItem(System__ComponentModel__TypeDescriptor__FilterCacheItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__ComponentModel__TypeDescriptor__FilterCacheItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__ComponentModel__TypeDescriptor__FilterCacheItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__ComponentModel__TypeDescriptor__FilterCacheItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__ComponentModel__TypeDescriptor__FilterCacheItem& operator=(System__ComponentModel__TypeDescriptor__FilterCacheItem&& o) noexcept = default;
  constexpr System__ComponentModel__TypeDescriptor__FilterCacheItem& operator=(System__ComponentModel__TypeDescriptor__FilterCacheItem const& o) noexcept = default;
                


// Fields

 System::ComponentModel::Design::ITypeDescriptorFilterService __declspec(property(get=__get__filterService, put=__set__filterService))  _filterService;

constexpr void __set__filterService(System::ComponentModel::Design::ITypeDescriptorFilterService value) ;

constexpr System::ComponentModel::Design::ITypeDescriptorFilterService __get__filterService() const;

 System::Collections::ICollection __declspec(property(get=__get_FilteredMembers, put=__set_FilteredMembers))  FilteredMembers;

constexpr void __set_FilteredMembers(System::Collections::ICollection value) ;

constexpr System::Collections::ICollection __get_FilteredMembers() const;


// Methods

// Ctor Parameters [CppParam { name: "filterService", ty: "System::ComponentModel::Design::ITypeDescriptorFilterService", modifiers: "", def_value: None }, CppParam { name: "filteredMembers", ty: "System::Collections::ICollection", modifiers: "", def_value: None }]
explicit System__ComponentModel__TypeDescriptor__FilterCacheItem(System::ComponentModel::Design::ITypeDescriptorFilterService filterService, System::Collections::ICollection filteredMembers) ;

/// @brief Method .ctor addr 0x27a0e60 size 0x2c virtual false final false
 void _ctor(System::ComponentModel::Design::ITypeDescriptorFilterService filterService, System::Collections::ICollection filteredMembers) ;

/// @brief Method IsValid addr 0x27a0e50 size 0x10 virtual false final false
 bool IsValid(System::ComponentModel::Design::ITypeDescriptorFilterService filterService) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Type: ::IUnimplemented
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8334))
// CS Name: System.ComponentModel.TypeDescriptor::IUnimplemented
class CORDL_TYPE System__ComponentModel__TypeDescriptor__IUnimplemented : public ::cordl_internals::InterfaceW {
public:
// Declarations
~System__ComponentModel__TypeDescriptor__IUnimplemented() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__ComponentModel__TypeDescriptor__IUnimplemented(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Type: ::MemberDescriptorComparer
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8335))
// CS Name: System.ComponentModel.TypeDescriptor::MemberDescriptorComparer
class CORDL_TYPE System__ComponentModel__TypeDescriptor__MemberDescriptorComparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IComparer
constexpr operator  System::Collections::IComparer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__ComponentModel__TypeDescriptor__MemberDescriptorComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeDescriptor__MemberDescriptorComparer", modifiers: " const&", def_value: None }]
constexpr System__ComponentModel__TypeDescriptor__MemberDescriptorComparer(System__ComponentModel__TypeDescriptor__MemberDescriptorComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeDescriptor__MemberDescriptorComparer", modifiers: "&&", def_value: None }]
constexpr System__ComponentModel__TypeDescriptor__MemberDescriptorComparer(System__ComponentModel__TypeDescriptor__MemberDescriptorComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__ComponentModel__TypeDescriptor__MemberDescriptorComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__ComponentModel__TypeDescriptor__MemberDescriptorComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__ComponentModel__TypeDescriptor__MemberDescriptorComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__ComponentModel__TypeDescriptor__MemberDescriptorComparer& operator=(System__ComponentModel__TypeDescriptor__MemberDescriptorComparer&& o) noexcept = default;
  constexpr System__ComponentModel__TypeDescriptor__MemberDescriptorComparer& operator=(System__ComponentModel__TypeDescriptor__MemberDescriptorComparer const& o) noexcept = default;
                


// Fields

static System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer value) ;

static System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer __get_Instance() ;


// Methods

/// @brief Method Compare addr 0x27a1334 size 0x16c virtual true final true
 int32_t Compare(::bs_hook::Il2CppWrapperType left, ::bs_hook::Il2CppWrapperType right) ;

// Ctor Parameters []
explicit System__ComponentModel__TypeDescriptor__MemberDescriptorComparer() ;

/// @brief Method .ctor addr 0x27a14a0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Type: ::MergedTypeDescriptor
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8336))
// CS Name: System.ComponentModel.TypeDescriptor::MergedTypeDescriptor
class CORDL_TYPE System__ComponentModel__TypeDescriptor__MergedTypeDescriptor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::ComponentModel::ICustomTypeDescriptor
constexpr operator  System::ComponentModel::ICustomTypeDescriptor() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__ComponentModel__TypeDescriptor__MergedTypeDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeDescriptor__MergedTypeDescriptor", modifiers: " const&", def_value: None }]
constexpr System__ComponentModel__TypeDescriptor__MergedTypeDescriptor(System__ComponentModel__TypeDescriptor__MergedTypeDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeDescriptor__MergedTypeDescriptor", modifiers: "&&", def_value: None }]
constexpr System__ComponentModel__TypeDescriptor__MergedTypeDescriptor(System__ComponentModel__TypeDescriptor__MergedTypeDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__ComponentModel__TypeDescriptor__MergedTypeDescriptor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__ComponentModel__TypeDescriptor__MergedTypeDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__ComponentModel__TypeDescriptor__MergedTypeDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__ComponentModel__TypeDescriptor__MergedTypeDescriptor& operator=(System__ComponentModel__TypeDescriptor__MergedTypeDescriptor&& o) noexcept = default;
  constexpr System__ComponentModel__TypeDescriptor__MergedTypeDescriptor& operator=(System__ComponentModel__TypeDescriptor__MergedTypeDescriptor const& o) noexcept = default;
                


// Fields

 System::ComponentModel::ICustomTypeDescriptor __declspec(property(get=__get__primary, put=__set__primary))  _primary;

constexpr void __set__primary(System::ComponentModel::ICustomTypeDescriptor value) ;

constexpr System::ComponentModel::ICustomTypeDescriptor __get__primary() const;

 System::ComponentModel::ICustomTypeDescriptor __declspec(property(get=__get__secondary, put=__set__secondary))  _secondary;

constexpr void __set__secondary(System::ComponentModel::ICustomTypeDescriptor value) ;

constexpr System::ComponentModel::ICustomTypeDescriptor __get__secondary() const;


// Methods

// Ctor Parameters [CppParam { name: "primary", ty: "System::ComponentModel::ICustomTypeDescriptor", modifiers: "", def_value: None }, CppParam { name: "secondary", ty: "System::ComponentModel::ICustomTypeDescriptor", modifiers: "", def_value: None }]
explicit System__ComponentModel__TypeDescriptor__MergedTypeDescriptor(System::ComponentModel::ICustomTypeDescriptor primary, System::ComponentModel::ICustomTypeDescriptor secondary) ;

/// @brief Method .ctor addr 0x279f570 size 0x2c virtual false final false
 void _ctor(System::ComponentModel::ICustomTypeDescriptor primary, System::ComponentModel::ICustomTypeDescriptor secondary) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes addr 0x27a150c size 0x110 virtual true final true
 System::ComponentModel::AttributeCollection System_ComponentModel_ICustomTypeDescriptor_GetAttributes() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName addr 0x27a161c size 0x118 virtual true final true
 ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName addr 0x27a1734 size 0x118 virtual true final true
 ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter addr 0x27a184c size 0x118 virtual true final true
 System::ComponentModel::TypeConverter System_ComponentModel_ICustomTypeDescriptor_GetConverter() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent addr 0x27a1964 size 0x118 virtual true final true
 System::ComponentModel::EventDescriptor System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty addr 0x27a1a7c size 0x118 virtual true final true
 System::ComponentModel::PropertyDescriptor System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor addr 0x27a1b94 size 0x1b4 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ComponentModel_ICustomTypeDescriptor_GetEditor(System::Type editorBaseType) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents addr 0x27a1d48 size 0x118 virtual true final true
 System::ComponentModel::EventDescriptorCollection System_ComponentModel_ICustomTypeDescriptor_GetEvents() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents addr 0x27a1e60 size 0x130 virtual true final true
 System::ComponentModel::EventDescriptorCollection System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<System::Attribute> attributes) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties addr 0x27a1f90 size 0x118 virtual true final true
 System::ComponentModel::PropertyDescriptorCollection System_ComponentModel_ICustomTypeDescriptor_GetProperties() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties addr 0x27a20a8 size 0x130 virtual true final true
 System::ComponentModel::PropertyDescriptorCollection System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<System::Attribute> attributes) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner addr 0x27a21d8 size 0x130 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(System::ComponentModel::PropertyDescriptor pd) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Type: ::DefaultExtendedTypeDescriptor
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8337))
// CS Name: System.ComponentModel.TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor
struct CORDL_TYPE System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::ComponentModel::ICustomTypeDescriptor
constexpr operator  System::ComponentModel::ICustomTypeDescriptor() const;

// Ctor Parameters [CppParam { name: "_node", ty: "System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode", modifiers: "", def_value: None }, CppParam { name: "_instance", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
constexpr System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode _node, ::bs_hook::Il2CppWrapperType _instance) noexcept;


                    constexpr System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor(System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor const&) = default;
                    constexpr System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor(System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor&&) = default;
                    constexpr System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor& operator=(System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor& operator=(System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode __declspec(property(get=__get__node, put=__set__node))  _node;

constexpr void __set__node(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode value) ;

constexpr System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode __get__node() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__instance, put=__set__instance))  _instance;

constexpr void __set__instance(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__instance() const;


// Methods

/// @brief Method .ctor addr 0x27a2424 size 0x8 virtual false final false
 void _ctor(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode node, ::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes addr 0x27a26f0 size 0x2dc virtual true final true
 System::ComponentModel::AttributeCollection System_ComponentModel_ICustomTypeDescriptor_GetAttributes() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName addr 0x27a29cc size 0x244 virtual true final true
 ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName addr 0x27a2c10 size 0x20c virtual true final true
 ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter addr 0x27a2e1c size 0x2a8 virtual true final true
 System::ComponentModel::TypeConverter System_ComponentModel_ICustomTypeDescriptor_GetConverter() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent addr 0x27a30c4 size 0x20c virtual true final true
 System::ComponentModel::EventDescriptor System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty addr 0x27a32d0 size 0x20c virtual true final true
 System::ComponentModel::PropertyDescriptor System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor addr 0x27a34dc size 0x2a8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ComponentModel_ICustomTypeDescriptor_GetEditor(System::Type editorBaseType) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents addr 0x27a3784 size 0x2e0 virtual true final true
 System::ComponentModel::EventDescriptorCollection System_ComponentModel_ICustomTypeDescriptor_GetEvents() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents addr 0x27a3a64 size 0x2e8 virtual true final true
 System::ComponentModel::EventDescriptorCollection System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<System::Attribute> attributes) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties addr 0x27a3d4c size 0x2a8 virtual true final true
 System::ComponentModel::PropertyDescriptorCollection System_ComponentModel_ICustomTypeDescriptor_GetProperties() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties addr 0x27a3ff4 size 0x2b0 virtual true final true
 System::ComponentModel::PropertyDescriptorCollection System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<System::Attribute> attributes) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner addr 0x27a42a4 size 0x1228 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(System::ComponentModel::PropertyDescriptor pd) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DefaultTypeDescriptor
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8338))
// CS Name: System.ComponentModel.TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor
struct CORDL_TYPE System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::ComponentModel::ICustomTypeDescriptor
constexpr operator  System::ComponentModel::ICustomTypeDescriptor() const;

// Ctor Parameters [CppParam { name: "_node", ty: "System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode", modifiers: "", def_value: None }, CppParam { name: "_objectType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "_instance", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
constexpr System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode _node, System::Type _objectType, ::bs_hook::Il2CppWrapperType _instance) noexcept;


                    constexpr System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor(System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor const&) = default;
                    constexpr System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor(System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor&&) = default;
                    constexpr System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor& operator=(System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor& operator=(System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode __declspec(property(get=__get__node, put=__set__node))  _node;

constexpr void __set__node(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode value) ;

constexpr System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode __get__node() const;

 System::Type __declspec(property(get=__get__objectType, put=__set__objectType))  _objectType;

constexpr void __set__objectType(System::Type value) ;

constexpr System::Type __get__objectType() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__instance, put=__set__instance))  _instance;

constexpr void __set__instance(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__instance() const;


// Methods

/// @brief Method .ctor addr 0x27a54cc size 0xc virtual false final false
 void _ctor(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode node, System::Type objectType, ::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes addr 0x27a54d8 size 0x2a8 virtual true final true
 System::ComponentModel::AttributeCollection System_ComponentModel_ICustomTypeDescriptor_GetAttributes() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName addr 0x27a5780 size 0x23c virtual true final true
 ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName addr 0x27a59bc size 0x210 virtual true final true
 ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter addr 0x27a5bcc size 0x2ac virtual true final true
 System::ComponentModel::TypeConverter System_ComponentModel_ICustomTypeDescriptor_GetConverter() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent addr 0x27a5e78 size 0x210 virtual true final true
 System::ComponentModel::EventDescriptor System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty addr 0x27a6088 size 0x210 virtual true final true
 System::ComponentModel::PropertyDescriptor System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor addr 0x27a6298 size 0x2ac virtual true final true
 ::bs_hook::Il2CppWrapperType System_ComponentModel_ICustomTypeDescriptor_GetEditor(System::Type editorBaseType) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents addr 0x27a6544 size 0x2ac virtual true final true
 System::ComponentModel::EventDescriptorCollection System_ComponentModel_ICustomTypeDescriptor_GetEvents() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents addr 0x27a67f0 size 0x2b4 virtual true final true
 System::ComponentModel::EventDescriptorCollection System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<System::Attribute> attributes) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties addr 0x27a6aa4 size 0x2ac virtual true final true
 System::ComponentModel::PropertyDescriptorCollection System_ComponentModel_ICustomTypeDescriptor_GetProperties() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties addr 0x27a6d50 size 0x2b4 virtual true final true
 System::ComponentModel::PropertyDescriptorCollection System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<System::Attribute> attributes) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner addr 0x27a7004 size 0x22c virtual true final true
 ::bs_hook::Il2CppWrapperType System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(System::ComponentModel::PropertyDescriptor pd) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TypeDescriptionNode
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8311))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8339))
// CS Name: System.ComponentModel.TypeDescriptor::TypeDescriptionNode
class CORDL_TYPE System__ComponentModel__TypeDescriptor__TypeDescriptionNode : public System::ComponentModel::TypeDescriptionProvider {
public:
// Declarations
using DefaultTypeDescriptor = GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor;

using DefaultExtendedTypeDescriptor = GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__ComponentModel__TypeDescriptor__TypeDescriptionNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeDescriptor__TypeDescriptionNode", modifiers: " const&", def_value: None }]
constexpr System__ComponentModel__TypeDescriptor__TypeDescriptionNode(System__ComponentModel__TypeDescriptor__TypeDescriptionNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeDescriptor__TypeDescriptionNode", modifiers: "&&", def_value: None }]
constexpr System__ComponentModel__TypeDescriptor__TypeDescriptionNode(System__ComponentModel__TypeDescriptor__TypeDescriptionNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__ComponentModel__TypeDescriptor__TypeDescriptionNode(void* ptr) noexcept : System::ComponentModel::TypeDescriptionProvider(ptr) {
}


  constexpr System__ComponentModel__TypeDescriptor__TypeDescriptionNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__ComponentModel__TypeDescriptor__TypeDescriptionNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__ComponentModel__TypeDescriptor__TypeDescriptionNode& operator=(System__ComponentModel__TypeDescriptor__TypeDescriptionNode&& o) noexcept = default;
  constexpr System__ComponentModel__TypeDescriptor__TypeDescriptionNode& operator=(System__ComponentModel__TypeDescriptor__TypeDescriptionNode const& o) noexcept = default;
                


// Fields

 System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode __declspec(property(get=__get_Next, put=__set_Next))  Next;

constexpr void __set_Next(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode value) ;

constexpr System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode __get_Next() const;

 System::ComponentModel::TypeDescriptionProvider __declspec(property(get=__get_Provider, put=__set_Provider))  Provider;

constexpr void __set_Provider(System::ComponentModel::TypeDescriptionProvider value) ;

constexpr System::ComponentModel::TypeDescriptionProvider __get_Provider() const;


// Methods

// Ctor Parameters [CppParam { name: "provider", ty: "System::ComponentModel::TypeDescriptionProvider", modifiers: "", def_value: None }]
explicit System__ComponentModel__TypeDescriptor__TypeDescriptionNode(System::ComponentModel::TypeDescriptionProvider provider) ;

/// @brief Method .ctor addr 0x279aa5c size 0x28 virtual false final false
 void _ctor(System::ComponentModel::TypeDescriptionProvider provider) ;

/// @brief Method GetCache addr 0x27a2308 size 0x70 virtual true final false
 System::Collections::IDictionary GetCache(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetExtendedTypeDescriptor addr 0x27a2378 size 0xac virtual true final false
 System::ComponentModel::ICustomTypeDescriptor GetExtendedTypeDescriptor(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetExtenderProviders addr 0x27a242c size 0x70 virtual true final false
 ::ArrayW<System::ComponentModel::IExtenderProvider> GetExtenderProviders(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetReflectionType addr 0x27a249c size 0xdc virtual true final false
 System::Type GetReflectionType(System::Type objectType, ::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetTypeDescriptor addr 0x27a2578 size 0x178 virtual true final false
 System::ComponentModel::ICustomTypeDescriptor GetTypeDescriptor(System::Type objectType, ::bs_hook::Il2CppWrapperType instance) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Type: ::TypeDescriptorComObject
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8340))
// CS Name: System.ComponentModel.TypeDescriptor::TypeDescriptorComObject
class CORDL_TYPE System__ComponentModel__TypeDescriptor__TypeDescriptorComObject : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__ComponentModel__TypeDescriptor__TypeDescriptorComObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeDescriptor__TypeDescriptorComObject", modifiers: " const&", def_value: None }]
constexpr System__ComponentModel__TypeDescriptor__TypeDescriptorComObject(System__ComponentModel__TypeDescriptor__TypeDescriptorComObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeDescriptor__TypeDescriptorComObject", modifiers: "&&", def_value: None }]
constexpr System__ComponentModel__TypeDescriptor__TypeDescriptorComObject(System__ComponentModel__TypeDescriptor__TypeDescriptorComObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__ComponentModel__TypeDescriptor__TypeDescriptorComObject(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__ComponentModel__TypeDescriptor__TypeDescriptorComObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__ComponentModel__TypeDescriptor__TypeDescriptorComObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__ComponentModel__TypeDescriptor__TypeDescriptorComObject& operator=(System__ComponentModel__TypeDescriptor__TypeDescriptorComObject&& o) noexcept = default;
  constexpr System__ComponentModel__TypeDescriptor__TypeDescriptorComObject& operator=(System__ComponentModel__TypeDescriptor__TypeDescriptorComObject const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Type: ::TypeDescriptorInterface
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8341))
// CS Name: System.ComponentModel.TypeDescriptor::TypeDescriptorInterface
class CORDL_TYPE System__ComponentModel__TypeDescriptor__TypeDescriptorInterface : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__ComponentModel__TypeDescriptor__TypeDescriptorInterface() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeDescriptor__TypeDescriptorInterface", modifiers: " const&", def_value: None }]
constexpr System__ComponentModel__TypeDescriptor__TypeDescriptorInterface(System__ComponentModel__TypeDescriptor__TypeDescriptorInterface const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeDescriptor__TypeDescriptorInterface", modifiers: "&&", def_value: None }]
constexpr System__ComponentModel__TypeDescriptor__TypeDescriptorInterface(System__ComponentModel__TypeDescriptor__TypeDescriptorInterface&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__ComponentModel__TypeDescriptor__TypeDescriptorInterface(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__ComponentModel__TypeDescriptor__TypeDescriptorInterface& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__ComponentModel__TypeDescriptor__TypeDescriptorInterface& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__ComponentModel__TypeDescriptor__TypeDescriptorInterface& operator=(System__ComponentModel__TypeDescriptor__TypeDescriptorInterface&& o) noexcept = default;
  constexpr System__ComponentModel__TypeDescriptor__TypeDescriptorInterface& operator=(System__ComponentModel__TypeDescriptor__TypeDescriptorInterface const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Type: System.ComponentModel::TypeDescriptor
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8342))
// CS Name: System.ComponentModel.TypeDescriptor
class CORDL_TYPE TypeDescriptor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using TypeDescriptorInterface = System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptorInterface;

using TypeDescriptorComObject = System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptorComObject;

using TypeDescriptionNode = System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode;

using MergedTypeDescriptor = System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor;

using MemberDescriptorComparer = System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer;

using IUnimplemented = System::ComponentModel::System__ComponentModel__TypeDescriptor__IUnimplemented;

using FilterCacheItem = System::ComponentModel::System__ComponentModel__TypeDescriptor__FilterCacheItem;

using AttributeFilterCacheItem = System::ComponentModel::System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TypeDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor", modifiers: " const&", def_value: None }]
constexpr TypeDescriptor(TypeDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor", modifiers: "&&", def_value: None }]
constexpr TypeDescriptor(TypeDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeDescriptor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TypeDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeDescriptor& operator=(TypeDescriptor&& o) noexcept = default;
  constexpr TypeDescriptor& operator=(TypeDescriptor const& o) noexcept = default;
                


// Fields

static System::ComponentModel::WeakHashtable __declspec(property(get=__get__providerTable, put=__set__providerTable))  _providerTable;

static void __set__providerTable(System::ComponentModel::WeakHashtable value) ;

static System::ComponentModel::WeakHashtable __get__providerTable() ;

static System::Collections::Hashtable __declspec(property(get=__get__providerTypeTable, put=__set__providerTypeTable))  _providerTypeTable;

static void __set__providerTypeTable(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get__providerTypeTable() ;

static System::Collections::Hashtable __declspec(property(get=__get__defaultProviders, put=__set__defaultProviders))  _defaultProviders;

static void __set__defaultProviders(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get__defaultProviders() ;

static System::ComponentModel::WeakHashtable __declspec(property(get=__get__associationTable, put=__set__associationTable))  _associationTable;

static void __set__associationTable(System::ComponentModel::WeakHashtable value) ;

static System::ComponentModel::WeakHashtable __get__associationTable() ;

static int32_t __declspec(property(get=__get__metadataVersion, put=__set__metadataVersion))  _metadataVersion;

static void __set__metadataVersion(int32_t value) ;

static int32_t __get__metadataVersion() ;

static int32_t __declspec(property(get=__get__collisionIndex, put=__set__collisionIndex))  _collisionIndex;

static void __set__collisionIndex(int32_t value) ;

static int32_t __get__collisionIndex() ;

static System::Diagnostics::BooleanSwitch __declspec(property(get=__get_TraceDescriptor, put=__set_TraceDescriptor))  TraceDescriptor;

static void __set_TraceDescriptor(System::Diagnostics::BooleanSwitch value) ;

static System::Diagnostics::BooleanSwitch __get_TraceDescriptor() ;

static ::ArrayW<System::Guid> __declspec(property(get=__get__pipelineInitializeKeys, put=__set__pipelineInitializeKeys))  _pipelineInitializeKeys;

static void __set__pipelineInitializeKeys(::ArrayW<System::Guid> value) ;

static ::ArrayW<System::Guid> __get__pipelineInitializeKeys() ;

static ::ArrayW<System::Guid> __declspec(property(get=__get__pipelineMergeKeys, put=__set__pipelineMergeKeys))  _pipelineMergeKeys;

static void __set__pipelineMergeKeys(::ArrayW<System::Guid> value) ;

static ::ArrayW<System::Guid> __get__pipelineMergeKeys() ;

static ::ArrayW<System::Guid> __declspec(property(get=__get__pipelineFilterKeys, put=__set__pipelineFilterKeys))  _pipelineFilterKeys;

static void __set__pipelineFilterKeys(::ArrayW<System::Guid> value) ;

static ::ArrayW<System::Guid> __get__pipelineFilterKeys() ;

static ::ArrayW<System::Guid> __declspec(property(get=__get__pipelineAttributeFilterKeys, put=__set__pipelineAttributeFilterKeys))  _pipelineAttributeFilterKeys;

static void __set__pipelineAttributeFilterKeys(::ArrayW<System::Guid> value) ;

static ::ArrayW<System::Guid> __get__pipelineAttributeFilterKeys() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__internalSyncObject, put=__set__internalSyncObject))  _internalSyncObject;

static void __set__internalSyncObject(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get__internalSyncObject() ;

static System::ComponentModel::RefreshEventHandler __declspec(property(get=__get_Refreshed, put=__set_Refreshed))  Refreshed;

static void __set_Refreshed(System::ComponentModel::RefreshEventHandler value) ;

static System::ComponentModel::RefreshEventHandler __get_Refreshed() ;


// Properties

static System::Type __declspec(property(get=get_ComObjectType))  ComObjectType;

static System::Type __declspec(property(get=get_InterfaceType))  InterfaceType;

static int32_t __declspec(property(get=get_MetadataVersion))  MetadataVersion;


// Methods

/// @brief Method get_ComObjectType addr 0x279a190 size 0x6c virtual false final false
static System::Type get_ComObjectType() ;

/// @brief Method get_InterfaceType addr 0x279a1fc size 0x6c virtual false final false
static System::Type get_InterfaceType() ;

/// @brief Method get_MetadataVersion addr 0x279a268 size 0x58 virtual false final false
static int32_t get_MetadataVersion() ;

/// @brief Method AddProvider addr 0x279a2c0 size 0x284 virtual false final false
static void AddProvider(System::ComponentModel::TypeDescriptionProvider provider, System::Type type) ;

/// @brief Method CheckDefaultProvider addr 0x279b0ac size 0x60c virtual false final false
static void CheckDefaultProvider(System::Type type) ;

/// @brief Method FilterMembers addr 0x279b6b8 size 0x358 virtual false final false
static System::Collections::ArrayList FilterMembers(System::Collections::IList members, ::ArrayW<System::Attribute> attributes) ;

/// @brief Method GetAssociation addr 0x278bca8 size 0x6d4 virtual false final false
static ::bs_hook::Il2CppWrapperType GetAssociation(System::Type type, ::bs_hook::Il2CppWrapperType primary) ;

/// @brief Method GetAttributes addr 0x278fabc size 0x15c virtual false final false
static System::ComponentModel::AttributeCollection GetAttributes(System::Type componentType) ;

/// @brief Method GetAttributes addr 0x27987f4 size 0x58 virtual false final false
static System::ComponentModel::AttributeCollection GetAttributes(::bs_hook::Il2CppWrapperType component) ;

/// @brief Method GetAttributes addr 0x279bb94 size 0x420 virtual false final false
static System::ComponentModel::AttributeCollection GetAttributes(::bs_hook::Il2CppWrapperType component, bool noCustomTypeDesc) ;

/// @brief Method GetCache addr 0x279458c size 0x6c virtual false final false
static System::Collections::IDictionary GetCache(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetConverter addr 0x279f430 size 0xe8 virtual false final false
static System::ComponentModel::TypeConverter GetConverter(System::Type type) ;

/// @brief Method GetDescriptor addr 0x279baa0 size 0xf4 virtual false final false
static System::ComponentModel::ICustomTypeDescriptor GetDescriptor(System::Type type, ::StringW typeName) ;

/// @brief Method GetDescriptor addr 0x279bfb4 size 0x214 virtual false final false
static System::ComponentModel::ICustomTypeDescriptor GetDescriptor(::bs_hook::Il2CppWrapperType component, bool noCustomTypeDesc) ;

/// @brief Method GetExtendedDescriptor addr 0x279c1c8 size 0xbc virtual false final false
static System::ComponentModel::ICustomTypeDescriptor GetExtendedDescriptor(::bs_hook::Il2CppWrapperType component) ;

/// @brief Method GetEvents addr 0x2798a50 size 0x164 virtual false final false
static System::ComponentModel::EventDescriptorCollection GetEvents(System::Type componentType) ;

/// @brief Method GetEvents addr 0x27989f4 size 0x5c virtual false final false
static System::ComponentModel::EventDescriptorCollection GetEvents(::bs_hook::Il2CppWrapperType component) ;

/// @brief Method GetEvents addr 0x279f59c size 0x4e4 virtual false final false
static System::ComponentModel::EventDescriptorCollection GetEvents(::bs_hook::Il2CppWrapperType component, ::ArrayW<System::Attribute> attributes, bool noCustomTypeDesc) ;

/// @brief Method GetExtenderCollisionSuffix addr 0x27a00d0 size 0x318 virtual false final false
static ::StringW GetExtenderCollisionSuffix(System::ComponentModel::MemberDescriptor member) ;

/// @brief Method GetNodeForBaseType addr 0x27a03e8 size 0xd4 virtual false final false
static System::Type GetNodeForBaseType(System::Type searchType) ;

/// @brief Method GetProperties addr 0x2798c0c size 0x164 virtual false final false
static System::ComponentModel::PropertyDescriptorCollection GetProperties(System::Type componentType) ;

/// @brief Method GetProperties addr 0x2798bb4 size 0x58 virtual false final false
static System::ComponentModel::PropertyDescriptorCollection GetProperties(::bs_hook::Il2CppWrapperType component) ;

/// @brief Method GetProperties addr 0x27a04bc size 0x6c virtual false final false
static System::ComponentModel::PropertyDescriptorCollection GetProperties(::bs_hook::Il2CppWrapperType component, bool noCustomTypeDesc) ;

/// @brief Method GetProperties addr 0x2787b90 size 0x68 virtual false final false
static System::ComponentModel::PropertyDescriptorCollection GetProperties(::bs_hook::Il2CppWrapperType component, ::ArrayW<System::Attribute> attributes) ;

/// @brief Method GetProperties addr 0x27a0b78 size 0x70 virtual false final false
static System::ComponentModel::PropertyDescriptorCollection GetProperties(::bs_hook::Il2CppWrapperType component, ::ArrayW<System::Attribute> attributes, bool noCustomTypeDesc) ;

/// @brief Method GetPropertiesImpl addr 0x27a0528 size 0x650 virtual false final false
static System::ComponentModel::PropertyDescriptorCollection GetPropertiesImpl(::bs_hook::Il2CppWrapperType component, ::ArrayW<System::Attribute> attributes, bool noCustomTypeDesc, bool noAttributes) ;

/// @brief Method GetProviderRecursive addr 0x27a0be8 size 0x58 virtual false final false
static System::ComponentModel::TypeDescriptionProvider GetProviderRecursive(System::Type type) ;

/// @brief Method GetReflectionType addr 0x278a4ec size 0xf4 virtual false final false
static System::Type GetReflectionType(System::Type type) ;

/// @brief Method NodeFor addr 0x279f518 size 0x58 virtual false final false
static System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode NodeFor(System::Type type) ;

/// @brief Method NodeFor addr 0x279a544 size 0x518 virtual false final false
static System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode NodeFor(System::Type type, bool createDelegator) ;

/// @brief Method NodeFor addr 0x279f3d8 size 0x58 virtual false final false
static System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode NodeFor(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method NodeFor addr 0x27a0c40 size 0x16c virtual false final false
static System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode NodeFor(::bs_hook::Il2CppWrapperType instance, bool createDelegator) ;

/// @brief Method PipelineAttributeFilter addr 0x279fa80 size 0x650 virtual false final false
static System::Collections::ICollection PipelineAttributeFilter(int32_t pipelineType, System::Collections::ICollection members, ::ArrayW<System::Attribute> filter, ::bs_hook::Il2CppWrapperType instance, System::Collections::IDictionary cache) ;

/// @brief Method PipelineFilter addr 0x279d3c8 size 0x18fc virtual false final false
static System::Collections::ICollection PipelineFilter(int32_t pipelineType, System::Collections::ICollection members, ::bs_hook::Il2CppWrapperType instance, System::Collections::IDictionary cache) ;

/// @brief Method PipelineInitialize addr 0x279ecc4 size 0x714 virtual false final false
static System::Collections::ICollection PipelineInitialize(int32_t pipelineType, System::Collections::ICollection members, System::Collections::IDictionary cache) ;

/// @brief Method PipelineMerge addr 0x279c284 size 0x1144 virtual false final false
static System::Collections::ICollection PipelineMerge(int32_t pipelineType, System::Collections::ICollection primary, System::Collections::ICollection secondary, ::bs_hook::Il2CppWrapperType instance, System::Collections::IDictionary cache) ;

/// @brief Method RaiseRefresh addr 0x27a0e8c size 0xb0 virtual false final false
static void RaiseRefresh(System::Type type) ;

/// @brief Method Refresh addr 0x279aa84 size 0x628 virtual false final false
static void Refresh(System::Type type) ;

/// @brief Method ShouldHideMember addr 0x279ba10 size 0x90 virtual false final false
static bool ShouldHideMember(System::ComponentModel::MemberDescriptor member, System::Attribute attribute) ;

/// @brief Method SortDescriptorArray addr 0x27a0f3c size 0xd8 virtual false final false
static void SortDescriptorArray(System::Collections::IList infos) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem, "System.ComponentModel", "TypeDescriptor/AttributeFilterCacheItem");
NEED_NO_BOX(System::ComponentModel::System__ComponentModel__TypeDescriptor__FilterCacheItem);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::System__ComponentModel__TypeDescriptor__FilterCacheItem, "System.ComponentModel", "TypeDescriptor/FilterCacheItem");
NEED_NO_BOX(System::ComponentModel::System__ComponentModel__TypeDescriptor__IUnimplemented);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::System__ComponentModel__TypeDescriptor__IUnimplemented, "System.ComponentModel", "TypeDescriptor/IUnimplemented");
NEED_NO_BOX(System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer, "System.ComponentModel", "TypeDescriptor/MemberDescriptorComparer");
NEED_NO_BOX(System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor, "System.ComponentModel", "TypeDescriptor/MergedTypeDescriptor");
NEED_NO_BOX(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode, "System.ComponentModel", "TypeDescriptor/TypeDescriptionNode");
NEED_NO_BOX(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptorComObject);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptorComObject, "System.ComponentModel", "TypeDescriptor/TypeDescriptorComObject");
NEED_NO_BOX(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptorInterface);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptorInterface, "System.ComponentModel", "TypeDescriptor/TypeDescriptorInterface");
NEED_NO_BOX(System::ComponentModel::TypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::TypeDescriptor, "System.ComponentModel", "TypeDescriptor");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor, "System.ComponentModel", "TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor, "System.ComponentModel", "TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor");

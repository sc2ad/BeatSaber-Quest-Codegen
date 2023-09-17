#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ProviderData;
}
// Type: System.Runtime.Remoting::ProviderData
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3063))
// CS Name: System.Runtime.Remoting.ProviderData
class CORDL_TYPE ProviderData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ProviderData() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProviderData", modifiers: " const&", def_value: None }]
constexpr ProviderData(ProviderData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProviderData", modifiers: "&&", def_value: None }]
constexpr ProviderData(ProviderData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProviderData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ProviderData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProviderData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProviderData& operator=(ProviderData&& o) noexcept = default;
  constexpr ProviderData& operator=(ProviderData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_Ref, put=__set_Ref))  Ref;

constexpr void __set_Ref(::StringW value) ;

constexpr ::StringW __get_Ref() const;

 ::StringW __declspec(property(get=__get_Type, put=__set_Type))  Type;

constexpr void __set_Type(::StringW value) ;

constexpr ::StringW __get_Type() const;

 ::StringW __declspec(property(get=__get_Id, put=__set_Id))  Id;

constexpr void __set_Id(::StringW value) ;

constexpr ::StringW __get_Id() const;

 ::System::Collections::Hashtable __declspec(property(get=__get_CustomProperties, put=__set_CustomProperties))  CustomProperties;

constexpr void __set_CustomProperties(::System::Collections::Hashtable value) ;

constexpr ::System::Collections::Hashtable __get_CustomProperties() const;

 ::System::Collections::IList __declspec(property(get=__get_CustomData, put=__set_CustomData))  CustomData;

constexpr void __set_CustomData(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_CustomData() const;


// Methods

/// @brief Method CopyFrom addr 0x231e00c size 0x704 virtual false final false
 void CopyFrom(::System::Runtime::Remoting::ProviderData other) ;

// Ctor Parameters []
explicit ProviderData() ;

/// @brief Method .ctor addr 0x23223ac size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::ProviderData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ProviderData, "System.Runtime.Remoting", "ProviderData");

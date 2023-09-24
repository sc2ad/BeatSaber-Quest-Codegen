#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::AddressableAssets {
struct UnityEngine__AddressableAssets__Addressables__MergeMode;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
class Exception;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Type;
}
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class InvalidKeyException;
}
// Type: UnityEngine.AddressableAssets::InvalidKeyException
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14329))
// CS Name: UnityEngine.AddressableAssets.InvalidKeyException
class CORDL_TYPE InvalidKeyException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~InvalidKeyException() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidKeyException", modifiers: " const&", def_value: None }]
constexpr InvalidKeyException(InvalidKeyException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidKeyException", modifiers: "&&", def_value: None }]
constexpr InvalidKeyException(InvalidKeyException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvalidKeyException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr InvalidKeyException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvalidKeyException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvalidKeyException& operator=(InvalidKeyException&& o) noexcept = default;
  constexpr InvalidKeyException& operator=(InvalidKeyException const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__Key_k__BackingField, put=__set__Key_k__BackingField))  _Key_k__BackingField;

constexpr void __set__Key_k__BackingField(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__Key_k__BackingField() const;

 System::Type __declspec(property(get=__get__Type_k__BackingField, put=__set__Type_k__BackingField))  _Type_k__BackingField;

constexpr void __set__Type_k__BackingField(System::Type value) ;

constexpr System::Type __get__Type_k__BackingField() const;

 System::Nullable_1<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode> __declspec(property(get=__get__MergeMode_k__BackingField, put=__set__MergeMode_k__BackingField))  _MergeMode_k__BackingField;

constexpr void __set__MergeMode_k__BackingField(System::Nullable_1<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode> value) ;

constexpr System::Nullable_1<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode> __get__MergeMode_k__BackingField() const;

 UnityEngine::AddressableAssets::AddressablesImpl __declspec(property(get=__get_m_Addressables, put=__set_m_Addressables))  m_Addressables;

constexpr void __set_m_Addressables(UnityEngine::AddressableAssets::AddressablesImpl value) ;

constexpr UnityEngine::AddressableAssets::AddressablesImpl __get_m_Addressables() const;

/// @brief Field BaseInvalidKeyMessageFormat offset 0
static constexpr ::ConstString  BaseInvalidKeyMessageFormat{u"{0}, Key={1}, Type={2}"};


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Key, put=set_Key))  Key;

 System::Type __declspec(property(get=get_Type, put=set_Type))  Type;

 System::Nullable_1<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode> __declspec(property(get=get_MergeMode))  MergeMode;

 ::StringW __declspec(property(get=get_Message))  Message;


// Methods

/// @brief Method get_Key addr 0x287e744 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Key() ;

/// @brief Method set_Key addr 0x287e74c size 0x8 virtual false final false
 void set_Key(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_Type addr 0x287e754 size 0x8 virtual false final false
 System::Type get_Type() ;

/// @brief Method set_Type addr 0x287e75c size 0x8 virtual false final false
 void set_Type(System::Type value) ;

/// @brief Method get_MergeMode addr 0x287e764 size 0x8 virtual false final false
 System::Nullable_1<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode> get_MergeMode() ;

static UnityEngine::AddressableAssets::InvalidKeyException New_ctor(::bs_hook::Il2CppWrapperType key) ;

/// @brief Method .ctor addr 0x287e76c size 0x8c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType key) ;

static UnityEngine::AddressableAssets::InvalidKeyException New_ctor(::bs_hook::Il2CppWrapperType key, System::Type type) ;

/// @brief Method .ctor addr 0x287e7f8 size 0x70 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType key, System::Type type) ;

static UnityEngine::AddressableAssets::InvalidKeyException New_ctor(::bs_hook::Il2CppWrapperType key, System::Type type, UnityEngine::AddressableAssets::AddressablesImpl addr) ;

/// @brief Method .ctor addr 0x287e868 size 0x80 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType key, System::Type type, UnityEngine::AddressableAssets::AddressablesImpl addr) ;

static UnityEngine::AddressableAssets::InvalidKeyException New_ctor(::bs_hook::Il2CppWrapperType key, System::Type type, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mergeMode) ;

/// @brief Method .ctor addr 0x287e8e8 size 0xac virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType key, System::Type type, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mergeMode) ;

static UnityEngine::AddressableAssets::InvalidKeyException New_ctor(::bs_hook::Il2CppWrapperType key, System::Type type, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mergeMode, UnityEngine::AddressableAssets::AddressablesImpl addr) ;

/// @brief Method .ctor addr 0x287e994 size 0xb8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType key, System::Type type, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mergeMode, UnityEngine::AddressableAssets::AddressablesImpl addr) ;

static UnityEngine::AddressableAssets::InvalidKeyException New_ctor() ;

/// @brief Method .ctor addr 0x287ea4c size 0x58 virtual false final false
 void _ctor() ;

static UnityEngine::AddressableAssets::InvalidKeyException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x287eaa4 size 0x68 virtual false final false
 void _ctor(::StringW message) ;

static UnityEngine::AddressableAssets::InvalidKeyException New_ctor(::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x287eb0c size 0x70 virtual false final false
 void _ctor(::StringW message, System::Exception innerException) ;

static UnityEngine::AddressableAssets::InvalidKeyException New_ctor(System::Runtime::Serialization::SerializationInfo message, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x287eb7c size 0x80 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo message, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Message addr 0x287ebfc size 0x6d8 virtual true final false
 ::StringW get_Message() ;

/// @brief Method GetMessageForSingleKey addr 0x287f2d4 size 0x514 virtual false final false
 ::StringW GetMessageForSingleKey(::StringW keyString) ;

/// @brief Method GetMessageforMergeKeys addr 0x287fbb4 size 0xfac virtual false final false
 ::StringW GetMessageforMergeKeys(System::Collections::Generic::List_1<::StringW> keys) ;

/// @brief Method GetTypesForKey addr 0x2880b60 size 0x714 virtual false final false
 System::Collections::Generic::HashSet_1<System::Type> GetTypesForKey(::StringW keyString) ;

/// @brief Method GetTypeToKeys addr 0x2881274 size 0x320 virtual false final false
 bool GetTypeToKeys(::StringW key, System::Collections::Generic::Dictionary_2<System::Type,System::Collections::Generic::List_1<::StringW>> typeToKeys) ;

/// @brief Method GetCSVString addr 0x287f7e8 size 0x3cc virtual false final false
 ::StringW GetCSVString(System::Collections::Generic::IEnumerable_1<::StringW> enumerator, ::StringW prefixSingle, ::StringW prefixPlural) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets
NEED_NO_BOX(UnityEngine::AddressableAssets::InvalidKeyException);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::InvalidKeyException, "UnityEngine.AddressableAssets", "InvalidKeyException");

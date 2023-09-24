#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__UxmlAttributeDescription__Use;
}
namespace UnityEngine::UIElements {
class UxmlTypeRestriction;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__UxmlAttributeDescription__Use;
}
namespace UnityEngine::UIElements {
class UxmlAttributeDescription;
}
// Type: ::Use
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7071))
// CS Name: UnityEngine.UIElements.UxmlAttributeDescription::Use
struct CORDL_TYPE UnityEngine__UIElements__UxmlAttributeDescription__Use : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__UxmlAttributeDescription__Use(int32_t value__) noexcept;


                    constexpr UnityEngine__UIElements__UxmlAttributeDescription__Use(UnityEngine__UIElements__UxmlAttributeDescription__Use const&) = default;
                    constexpr UnityEngine__UIElements__UxmlAttributeDescription__Use(UnityEngine__UIElements__UxmlAttributeDescription__Use&&) = default;
                    constexpr UnityEngine__UIElements__UxmlAttributeDescription__Use& operator=(UnityEngine__UIElements__UxmlAttributeDescription__Use const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__UxmlAttributeDescription__Use& operator=(UnityEngine__UIElements__UxmlAttributeDescription__Use&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UxmlAttributeDescription__Use(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UIElements__UxmlAttributeDescription__Use_Unwrapped : int32_t {
__None = 0,
__Optional = 1,
__Prohibited = 2,
__Required = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UIElements__UxmlAttributeDescription__Use_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UIElements__UxmlAttributeDescription__Use_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__UxmlAttributeDescription__Use const None;

/// @brief Field Optional offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__UxmlAttributeDescription__Use const Optional;

/// @brief Field Prohibited offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__UxmlAttributeDescription__Use const Prohibited;

/// @brief Field Required offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__UxmlAttributeDescription__Use const Required;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::UxmlAttributeDescription
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7072))
// CS Name: UnityEngine.UIElements.UxmlAttributeDescription
class CORDL_TYPE UxmlAttributeDescription : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Use = UnityEngine::UIElements::UnityEngine__UIElements__UxmlAttributeDescription__Use;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UxmlAttributeDescription() = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlAttributeDescription", modifiers: " const&", def_value: None }]
constexpr UxmlAttributeDescription(UxmlAttributeDescription const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlAttributeDescription", modifiers: "&&", def_value: None }]
constexpr UxmlAttributeDescription(UxmlAttributeDescription&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UxmlAttributeDescription(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UxmlAttributeDescription& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UxmlAttributeDescription& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UxmlAttributeDescription& operator=(UxmlAttributeDescription&& o) noexcept = default;
  constexpr UxmlAttributeDescription& operator=(UxmlAttributeDescription const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__name_k__BackingField, put=__set__name_k__BackingField))  _name_k__BackingField;

constexpr void __set__name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__name_k__BackingField() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_m_ObsoleteNames, put=__set_m_ObsoleteNames))  m_ObsoleteNames;

constexpr void __set_m_ObsoleteNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_m_ObsoleteNames() const;

 ::StringW __declspec(property(get=__get__type_k__BackingField, put=__set__type_k__BackingField))  _type_k__BackingField;

constexpr void __set__type_k__BackingField(::StringW value) ;

constexpr ::StringW __get__type_k__BackingField() const;

 ::StringW __declspec(property(get=__get__typeNamespace_k__BackingField, put=__set__typeNamespace_k__BackingField))  _typeNamespace_k__BackingField;

constexpr void __set__typeNamespace_k__BackingField(::StringW value) ;

constexpr ::StringW __get__typeNamespace_k__BackingField() const;

 UnityEngine::UIElements::UnityEngine__UIElements__UxmlAttributeDescription__Use __declspec(property(get=__get__use_k__BackingField, put=__set__use_k__BackingField))  _use_k__BackingField;

constexpr void __set__use_k__BackingField(UnityEngine::UIElements::UnityEngine__UIElements__UxmlAttributeDescription__Use value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__UxmlAttributeDescription__Use __get__use_k__BackingField() const;

 UnityEngine::UIElements::UxmlTypeRestriction __declspec(property(get=__get__restriction_k__BackingField, put=__set__restriction_k__BackingField))  _restriction_k__BackingField;

constexpr void __set__restriction_k__BackingField(UnityEngine::UIElements::UxmlTypeRestriction value) ;

constexpr UnityEngine::UIElements::UxmlTypeRestriction __get__restriction_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_name, put=set_name))  name;

 System::Collections::Generic::IEnumerable_1<::StringW> __declspec(property(put=set_obsoleteNames))  obsoleteNames;

 ::StringW __declspec(property(put=set_type))  type;

 ::StringW __declspec(property(put=set_typeNamespace))  typeNamespace;

 UnityEngine::UIElements::UnityEngine__UIElements__UxmlAttributeDescription__Use __declspec(property(put=set_use))  use;

 UnityEngine::UIElements::UxmlTypeRestriction __declspec(property(put=set_restriction))  restriction;


// Methods

static UnityEngine::UIElements::UxmlAttributeDescription New_ctor() ;

/// @brief Method .ctor addr 0x2c966f8 size 0x24 virtual false final false
 void _ctor() ;

/// @brief Method get_name addr 0x2c9671c size 0x8 virtual false final false
 ::StringW get_name() ;

/// @brief Method set_name addr 0x2c96724 size 0x8 virtual false final false
 void set_name(::StringW value) ;

/// @brief Method set_obsoleteNames addr 0x2c9672c size 0x5c virtual false final false
 void set_obsoleteNames(System::Collections::Generic::IEnumerable_1<::StringW> value) ;

/// @brief Method set_type addr 0x2c96788 size 0x8 virtual false final false
 void set_type(::StringW value) ;

/// @brief Method set_typeNamespace addr 0x2c96790 size 0x8 virtual false final false
 void set_typeNamespace(::StringW value) ;

/// @brief Method set_use addr 0x2c96798 size 0x8 virtual false final false
 void set_use(UnityEngine::UIElements::UnityEngine__UIElements__UxmlAttributeDescription__Use value) ;

/// @brief Method set_restriction addr 0x2c967a0 size 0x8 virtual false final false
 void set_restriction(UnityEngine::UIElements::UxmlTypeRestriction value) ;

/// @brief Method TryGetValueFromBagAsString addr 0x2c967a8 size 0x1474 virtual false final false
 bool TryGetValueFromBagAsString(UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc, ByRef<::StringW> value) ;

/// @brief Method TryGetValueFromBag addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 bool TryGetValueFromBag(UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc, System::Func_3<::StringW,T,T> converterFunc, T defaultValue, ByRef<T> value) ;

/// @brief Method GetValueFromBag addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T GetValueFromBag(UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc, System::Func_3<::StringW,T,T> converterFunc, T defaultValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__UxmlAttributeDescription__Use, "UnityEngine.UIElements", "UxmlAttributeDescription/Use");
NEED_NO_BOX(UnityEngine::UIElements::UxmlAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UxmlAttributeDescription, "UnityEngine.UIElements", "UxmlAttributeDescription");

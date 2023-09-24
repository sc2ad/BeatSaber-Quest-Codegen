#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace HoudiniEngineUnity {
struct HAPI_StorageType;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeOwner;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_OutputAttribute;
}
// Type: HoudiniEngineUnity::HEU_OutputAttribute
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9607))
// CS Name: HoudiniEngineUnity.HEU_OutputAttribute
class CORDL_TYPE HEU_OutputAttribute : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~HEU_OutputAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_OutputAttribute", modifiers: " const&", def_value: None }]
constexpr HEU_OutputAttribute(HEU_OutputAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_OutputAttribute", modifiers: "&&", def_value: None }]
constexpr HEU_OutputAttribute(HEU_OutputAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_OutputAttribute(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_OutputAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_OutputAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_OutputAttribute& operator=(HEU_OutputAttribute&& o) noexcept = default;
  constexpr HEU_OutputAttribute& operator=(HEU_OutputAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(::StringW value) ;

constexpr ::StringW __get__name() const;

 HoudiniEngineUnity::HAPI_AttributeOwner __declspec(property(get=__get__class, put=__set__class))  _class;

constexpr void __set__class(HoudiniEngineUnity::HAPI_AttributeOwner value) ;

constexpr HoudiniEngineUnity::HAPI_AttributeOwner __get__class() const;

 HoudiniEngineUnity::HAPI_StorageType __declspec(property(get=__get__type, put=__set__type))  _type;

constexpr void __set__type(HoudiniEngineUnity::HAPI_StorageType value) ;

constexpr HoudiniEngineUnity::HAPI_StorageType __get__type() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;

 int32_t __declspec(property(get=__get__tupleSize, put=__set__tupleSize))  _tupleSize;

constexpr void __set__tupleSize(int32_t value) ;

constexpr int32_t __get__tupleSize() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__intValues, put=__set__intValues))  _intValues;

constexpr void __set__intValues(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__intValues() const;

 ::ArrayW<float_t> __declspec(property(get=__get__floatValues, put=__set__floatValues))  _floatValues;

constexpr void __set__floatValues(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__floatValues() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__stringValues, put=__set__stringValues))  _stringValues;

constexpr void __set__stringValues(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__stringValues() const;


// Methods

static HoudiniEngineUnity::HEU_OutputAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2011154 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_OutputAttribute);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_OutputAttribute, "HoudiniEngineUnity", "HEU_OutputAttribute");

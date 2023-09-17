#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace HoudiniEngineUnity {
struct HAPI_StorageType;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeTypeInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeOwner;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
// Type: HoudiniEngineUnity::HAPI_AttributeInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9682))
// CS Name: HoudiniEngineUnity.HAPI_AttributeInfo
struct CORDL_TYPE HAPI_AttributeInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "exists", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "owner", ty: "::HoudiniEngineUnity::HAPI_AttributeOwner", modifiers: "", def_value: None }, CppParam { name: "storage", ty: "::HoudiniEngineUnity::HAPI_StorageType", modifiers: "", def_value: None }, CppParam { name: "originalOwner", ty: "::HoudiniEngineUnity::HAPI_AttributeOwner", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tupleSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalArrayElements", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "typeInfo", ty: "::HoudiniEngineUnity::HAPI_AttributeTypeInfo", modifiers: "", def_value: None }]
constexpr HAPI_AttributeInfo(bool exists, ::HoudiniEngineUnity::HAPI_AttributeOwner owner, ::HoudiniEngineUnity::HAPI_StorageType storage, ::HoudiniEngineUnity::HAPI_AttributeOwner originalOwner, int32_t count, int32_t tupleSize, int64_t totalArrayElements, ::HoudiniEngineUnity::HAPI_AttributeTypeInfo typeInfo) noexcept;


                    constexpr HAPI_AttributeInfo(HAPI_AttributeInfo const&) = default;
                    constexpr HAPI_AttributeInfo(HAPI_AttributeInfo&&) = default;
                    constexpr HAPI_AttributeInfo& operator=(HAPI_AttributeInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_AttributeInfo& operator=(HAPI_AttributeInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_AttributeInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_exists, put=__set_exists))  exists;

constexpr void __set_exists(bool value) ;

constexpr bool __get_exists() const;

 ::HoudiniEngineUnity::HAPI_AttributeOwner __declspec(property(get=__get_owner, put=__set_owner))  owner;

constexpr void __set_owner(::HoudiniEngineUnity::HAPI_AttributeOwner value) ;

constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner __get_owner() const;

 ::HoudiniEngineUnity::HAPI_StorageType __declspec(property(get=__get_storage, put=__set_storage))  storage;

constexpr void __set_storage(::HoudiniEngineUnity::HAPI_StorageType value) ;

constexpr ::HoudiniEngineUnity::HAPI_StorageType __get_storage() const;

 ::HoudiniEngineUnity::HAPI_AttributeOwner __declspec(property(get=__get_originalOwner, put=__set_originalOwner))  originalOwner;

constexpr void __set_originalOwner(::HoudiniEngineUnity::HAPI_AttributeOwner value) ;

constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner __get_originalOwner() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 int32_t __declspec(property(get=__get_tupleSize, put=__set_tupleSize))  tupleSize;

constexpr void __set_tupleSize(int32_t value) ;

constexpr int32_t __get_tupleSize() const;

 int64_t __declspec(property(get=__get_totalArrayElements, put=__set_totalArrayElements))  totalArrayElements;

constexpr void __set_totalArrayElements(int64_t value) ;

constexpr int64_t __get_totalArrayElements() const;

 ::HoudiniEngineUnity::HAPI_AttributeTypeInfo __declspec(property(get=__get_typeInfo, put=__set_typeInfo))  typeInfo;

constexpr void __set_typeInfo(::HoudiniEngineUnity::HAPI_AttributeTypeInfo value) ;

constexpr ::HoudiniEngineUnity::HAPI_AttributeTypeInfo __get_typeInfo() const;


// Methods

/// @brief Method .ctor addr 0x201f600 size 0x20 virtual false final false
 void _ctor(::StringW ignored) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_AttributeInfo, "HoudiniEngineUnity", "HAPI_AttributeInfo");

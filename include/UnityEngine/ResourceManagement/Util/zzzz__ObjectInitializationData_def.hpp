#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::Util {
struct SerializedType;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
struct ObjectInitializationData;
}
// Type: UnityEngine.ResourceManagement.Util::ObjectInitializationData
namespace UnityEngine::ResourceManagement::Util {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14265))
// CS Name: UnityEngine.ResourceManagement.Util.ObjectInitializationData
struct CORDL_TYPE ObjectInitializationData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_ObjectType", ty: "UnityEngine::ResourceManagement::Util::SerializedType", modifiers: "", def_value: None }, CppParam { name: "m_Data", ty: "::StringW", modifiers: "", def_value: None }]
constexpr ObjectInitializationData(::StringW m_Id, UnityEngine::ResourceManagement::Util::SerializedType m_ObjectType, ::StringW m_Data) noexcept;


                    constexpr ObjectInitializationData(ObjectInitializationData const&) = default;
                    constexpr ObjectInitializationData(ObjectInitializationData&&) = default;
                    constexpr ObjectInitializationData& operator=(ObjectInitializationData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ObjectInitializationData& operator=(ObjectInitializationData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ObjectInitializationData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_m_Id, put=__set_m_Id))  m_Id;

constexpr void __set_m_Id(::StringW value) ;

constexpr ::StringW __get_m_Id() const;

 UnityEngine::ResourceManagement::Util::SerializedType __declspec(property(get=__get_m_ObjectType, put=__set_m_ObjectType))  m_ObjectType;

constexpr void __set_m_ObjectType(UnityEngine::ResourceManagement::Util::SerializedType value) ;

constexpr UnityEngine::ResourceManagement::Util::SerializedType __get_m_ObjectType() const;

 ::StringW __declspec(property(get=__get_m_Data, put=__set_m_Data))  m_Data;

constexpr void __set_m_Data(::StringW value) ;

constexpr ::StringW __get_m_Data() const;


// Properties

 ::StringW __declspec(property(get=get_Id))  Id;

 UnityEngine::ResourceManagement::Util::SerializedType __declspec(property(get=get_ObjectType))  ObjectType;

 ::StringW __declspec(property(get=get_Data))  Data;


// Methods

/// @brief Method get_Id addr 0x2a3ae64 size 0x8 virtual false final false
 ::StringW get_Id() ;

/// @brief Method get_ObjectType addr 0x2a3ae6c size 0x10 virtual false final false
 UnityEngine::ResourceManagement::Util::SerializedType get_ObjectType() ;

/// @brief Method get_Data addr 0x2a3ae7c size 0x8 virtual false final false
 ::StringW get_Data() ;

/// @brief Method ToString addr 0x2a3ae84 size 0x98 virtual true final false
 ::StringW ToString() ;

/// @brief Method CreateInstance addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
 TObject CreateInstance(::StringW idOverride) ;

/// @brief Method GetAsyncInitHandle addr 0x2a3af1c size 0x24c virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle GetAsyncInitHandle(UnityEngine::ResourceManagement::ResourceManager rm, ::StringW idOverride) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Util::ObjectInitializationData, "UnityEngine.ResourceManagement.Util", "ObjectInitializationData");

#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
// Forward declare root types
namespace UnityEngine::Scripting::APIUpdating {
struct MovedFromAttributeData;
}
// Type: UnityEngine.Scripting.APIUpdating::MovedFromAttributeData
namespace UnityEngine::Scripting::APIUpdating {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10256))
// CS Name: UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
struct CORDL_TYPE MovedFromAttributeData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "className", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "nameSpace", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "assembly", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "classHasChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "nameSpaceHasChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "assemblyHasChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "autoUdpateAPI", ty: "bool", modifiers: "", def_value: None }]
constexpr MovedFromAttributeData(::StringW className, ::StringW nameSpace, ::StringW assembly, bool classHasChanged, bool nameSpaceHasChanged, bool assemblyHasChanged, bool autoUdpateAPI) noexcept;


                    constexpr MovedFromAttributeData(MovedFromAttributeData const&) = default;
                    constexpr MovedFromAttributeData(MovedFromAttributeData&&) = default;
                    constexpr MovedFromAttributeData& operator=(MovedFromAttributeData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MovedFromAttributeData& operator=(MovedFromAttributeData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MovedFromAttributeData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_className, put=__set_className))  className;

constexpr void __set_className(::StringW value) ;

constexpr ::StringW __get_className() const;

 ::StringW __declspec(property(get=__get_nameSpace, put=__set_nameSpace))  nameSpace;

constexpr void __set_nameSpace(::StringW value) ;

constexpr ::StringW __get_nameSpace() const;

 ::StringW __declspec(property(get=__get_assembly, put=__set_assembly))  assembly;

constexpr void __set_assembly(::StringW value) ;

constexpr ::StringW __get_assembly() const;

 bool __declspec(property(get=__get_classHasChanged, put=__set_classHasChanged))  classHasChanged;

constexpr void __set_classHasChanged(bool value) ;

constexpr bool __get_classHasChanged() const;

 bool __declspec(property(get=__get_nameSpaceHasChanged, put=__set_nameSpaceHasChanged))  nameSpaceHasChanged;

constexpr void __set_nameSpaceHasChanged(bool value) ;

constexpr bool __get_nameSpaceHasChanged() const;

 bool __declspec(property(get=__get_assemblyHasChanged, put=__set_assemblyHasChanged))  assemblyHasChanged;

constexpr void __set_assemblyHasChanged(bool value) ;

constexpr bool __get_assemblyHasChanged() const;

 bool __declspec(property(get=__get_autoUdpateAPI, put=__set_autoUdpateAPI))  autoUdpateAPI;

constexpr void __set_autoUdpateAPI(bool value) ;

constexpr bool __get_autoUdpateAPI() const;


// Methods

/// @brief Method Set addr 0x2b71b58 size 0x38 virtual false final false
 void Set(bool autoUpdateAPI, ::StringW sourceNamespace, ::StringW sourceAssembly, ::StringW sourceClassName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Scripting::APIUpdating
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Scripting::APIUpdating::MovedFromAttributeData, "UnityEngine.Scripting.APIUpdating", "MovedFromAttributeData");
